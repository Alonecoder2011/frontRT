#!/bin/sh

echo "[=============== F R O N T  R T ================]"
echo "[!] Front runtime -> build src"
g++ src/frontrt/*.cpp -o bin/frontrt -I src/frontrt/include
g++ src/frontrt/pack/*.cpp src/frontrt/base.cpp -o bin/frtPack -I src/frontrt/include