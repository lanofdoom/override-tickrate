#include "extension.h"

#include "sourcehook.h"
#include "tier0/icommandline.h"

namespace {

OverrideTickrate g_override_tickrate;

float GetTickInterval() {
  ICommandLine* command_line = CommandLine();

  if (!command_line->CheckParm("-tickrate")) {
    RETURN_META_VALUE(MRES_IGNORED, 1.0f);
  }

  int tickrate = CommandLine()->ParmValue("-tickrate", 100);
  if (tickrate < 30) {
    RETURN_META_VALUE(MRES_IGNORED, 1.0f);
  }

  RETURN_META_VALUE(MRES_SUPERCEDE, 1.0f / static_cast<float>(tickrate));
}

}  // namespace

SH_DECL_HOOK0(IServerGameDLL, GetTickInterval, const, 0, float);

bool OverrideTickrate::SDK_OnLoad(char* error, size_t maxlength, bool late) {
  SH_ADD_HOOK(IServerGameDLL, GetTickInterval, gamedll,
              SH_STATIC(GetTickInterval), false);
  return true;
}

void OverrideTickrate::SDK_OnUnload() {
  SH_REMOVE_HOOK(IServerGameDLL, GetTickInterval, gamedll,
                 SH_STATIC(GetTickInterval), false);
}

SMEXT_LINK(&g_override_tickrate);