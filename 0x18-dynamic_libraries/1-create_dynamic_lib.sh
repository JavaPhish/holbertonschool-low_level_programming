#!/bin/bash
gcc -Wall -Werror -pedantic -c *.c
gcc -shared -o liball.so *.o
