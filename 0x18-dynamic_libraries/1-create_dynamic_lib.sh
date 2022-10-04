#!/bin/bash
gcc -c -fpic -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so *.o
