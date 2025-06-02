# Override Tickrate
A SourceMod extension for overriding a server's tickrate

# Building
Check out the repository, install the dependencies listed in ``build.sh``, and
then run the ``./build.sh`` script.

# Installation
1) If running *64-bit* Linux and the dedicated server is a 32-bit binary,
   install the ``libstdc++6:i386`` package or its equivalent on your
   distribution to your server.
2) Extract ``override_tickrate.tar.gz`` or ``override_tickrate.zip`` in your
   server's ``cstrike`` directory or equivalent.

# Usage
Specify `-tickrate` on the command line when starting srcds.