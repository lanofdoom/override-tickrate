mkdir -p alliedmodders
cd alliedmodders
git clone --recursive https://github.com/alliedmodders/sourcemod
.\sourcemod\tools\checkout-deps.ps1
ren mmsource-1.12 metamod-source

cd ..\extension
.\build.ps1
cd ..

cd build
Compress-Archive -Path addons -DestinationPath override_tickrate.zip
mkdir -p dist
move override_tickrate.zip dist\override_tickrate.zip
cd ..