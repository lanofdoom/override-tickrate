#ifndef _OVERRIDE_TICKRATE_EXTENSION_EXTENSION_
#define _OVERRIDE_TICKRATE_EXTENSION_EXTENSION_

#include "smsdk_ext.h"

class OverrideTickrate : public SDKExtension {
 public:
  virtual bool SDK_OnLoad(char* error, size_t maxlength, bool late);
  virtual void SDK_OnUnload();
};

#endif  // _OVERRIDE_TICKRATE_EXTENSION_EXTENSION_
