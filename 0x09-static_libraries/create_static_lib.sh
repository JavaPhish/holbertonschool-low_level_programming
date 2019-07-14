#!/bin/bash
gcc -c *.c
ar rs liball.a *.o
rm *.c
rm *.o
