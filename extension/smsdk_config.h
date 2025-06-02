#ifndef _OVERRIDE_TICKRATE_EXTENSION_SMSDK_CONFIG_
#define _OVERRIDE_TICKRATE_EXTENSION_SMSDK_CONFIG_

#define SMEXT_CONF_NAME         "Override Tickrate"
#define SMEXT_CONF_DESCRIPTION  "Overrides a server's tickrate"
#define SMEXT_CONF_VERSION      "1.0.1"
#define SMEXT_CONF_AUTHOR       "LAN of DOOM"
#define SMEXT_CONF_URL          "https://lanofdoom.github.io/override-tickrate/"
#define SMEXT_CONF_LOGTAG       "LODTICK"
#define SMEXT_CONF_LICENSE      "GPL"
#define SMEXT_CONF_DATESTRING   __DATE__

#define SMEXT_LINK(name) SDKExtension *g_pExtensionIface = name;

// Enable SourceHook, IGameHelper, and console out
#define SMEXT_CONF_METAMOD
#define SMEXT_ENABLE_GAMEHELPERS
#define SMEXT_ENABLE_ROOTCONSOLEMENU

#endif  // _OVERRIDE_TICKRATE_EXTENSION_SMSDK_CONFIG_
