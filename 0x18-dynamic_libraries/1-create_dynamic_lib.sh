#!/bin/bash
gcc -fpic -c *.c
gcc -shared *.O -o liball.so
