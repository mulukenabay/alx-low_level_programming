#!/bin/bash
gcc *.o -shared -o nrandom.so
export LD_PRELOAD=$PWD/nrandom.so
