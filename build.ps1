mkdir -p alliedmodders
cd alliedmodders
git clone --recursive https://github.com/alliedmodders/sourcemod
cd sourcemod
git checkout 5c407d494889dd1b6b2187bbc31ac82
cd ..
.\sourcemod\tools\checkout-deps.ps1

cd ..\extension
.\build.ps1
cd ..

cd build
Compress-Archive -Path addons -DestinationPath override_tickrate.zip
mkdir -p dist
move override_tickrate.zip dist\override_tickrate.zip
cd ..