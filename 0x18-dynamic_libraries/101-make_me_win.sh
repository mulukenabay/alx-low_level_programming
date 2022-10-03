#!/bin/bash
gcc *.o -shared -o nrandom.so
LD_PRELOAD=$PWD/nrandom.so
