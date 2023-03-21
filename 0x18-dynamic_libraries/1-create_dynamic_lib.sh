#!/bin/bash
gcc -c -fPIC  *.c
gcc -shared -o liball.so *.o
nm -D --defined-only liball.so
