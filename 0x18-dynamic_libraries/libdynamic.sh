#!/bin/bash
gcc -wall -fpic -c *.c
gcc -shared -o libdynamic.so *.o
