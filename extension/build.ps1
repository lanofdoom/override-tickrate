mkdir -p ..\alliedmodders\extension\build
cp -r .\* ..\alliedmodders\extension\
cd ..\alliedmodders\extension\build
git clone https://github.com/alliedmodders/hl2sdk-manifests.git
python ..\configure.py --hl2sdk-manifest-path ./hl2sdk-manifests
ambuild

mkdir -p ..\..\..\build\addons\sourcemod\extensions
cp package\addons\sourcemod\extensions\* ..\..\..\build\addons\sourcemod\extensions\

echo built override_tickrate.ext.dll

cd ..\..\..\extension