#!/bin/bash
<<<<<<< HEAD
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
=======
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
>>>>>>> a931394bbaa4ea9c47e07fd012a312a8c4365c49
