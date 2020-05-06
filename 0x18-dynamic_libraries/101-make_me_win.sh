#!/bin/bash
ECHO "int *pick_numbers() { return ([9, 8, 10, 24, 75, 9]); }" > pick_numbers.c
EXPORT LD_PRELOAD=pick_numbers.c
