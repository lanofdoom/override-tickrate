#include "extension.h"

#include <algorithm>

#include "tier0/icommandline.h"
#include "sourcehook.h"

namespace {

OverrideTickrate g_override_tickrate;

float GetTickInterval() {
  int tickrate = std::max(30, CommandLine()->ParmValue("-tickrate", 100));
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