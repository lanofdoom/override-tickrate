#ifndef _OVERRIDE_TICKRATE_EXTENSION_EXTENSION_
#define _OVERRIDE_TICKRATE_EXTENSION_EXTENSION_

#include "smsdk_ext.h"

class OverrideTickrate final : public SDKExtension {
 public:
  virtual bool SDK_OnMetamodLoad(ISmmAPI* ismm, char* error, size_t maxlength,
                                 bool late) override;
  virtual void OnCoreMapStart(edict_t* pEdictList, int edictCount,
                              int clientMax) override;
  virtual void SDK_OnUnload() override;

 private:
  bool server_reinitialized_ = false;
};

#endif  // _OVERRIDE_TICKRATE_EXTENSION_EXTENSION_
