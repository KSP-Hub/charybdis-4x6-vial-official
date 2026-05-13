#!/bin/sh
/mingw64/bin/qmk "$@" 2>&1 | sed '/^Could not find module/d; /^Please run/d; /^$/d'
