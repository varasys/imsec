#!/usr/bin/env sh

if [ "$1" = "debug" ]; then
  gcc -Wall -g src/imsec.c -o build/imsec
else
  gcc -Wall -O2 src/imsec.c -o build/imsec
fi
