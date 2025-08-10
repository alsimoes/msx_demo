#!/bin/bash
# ____________________________
# ██▀▀█▀▀██▀▀▀▀▀▀▀█▀▀█        │   ▄▄▄                ▄▄
# ██  ▀  █▄  ▀██▄ ▀ ▄█ ▄▀▀ █  │  ▀█▄  ▄▀██ ▄█▄█ ██▀▄ ██  ▄███
# █  █ █  ▀▀  ▄█  █  █ ▀▄█ █▄ │  ▄▄█▀ ▀▄██ ██ █ ██▀  ▀█▄ ▀█▄▄
# ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀────────┘                 ▀▀
#  by Guillaume 'Aoineko' Blanchard under CC BY-SA license
#────────────────────────────────────────────────────────────────────
clear

if type -P node; then
	node C:/dev/c/msx-demo/MSXgl/engine/script/js/build.js target=$1
else
	C:/dev/c/msx-demo/MSXgl/tools/build/Node/node C:/dev/c/msx-demo/MSXgl/engine/script/js/build.js target=$1
fi
