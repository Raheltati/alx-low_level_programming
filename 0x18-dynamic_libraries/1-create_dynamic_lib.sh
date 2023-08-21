#!/bin/bash
gcc -wall -wextre -werror -pendantic -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH