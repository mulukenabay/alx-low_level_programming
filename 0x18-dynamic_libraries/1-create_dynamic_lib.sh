#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o -L. liball.so *.o
