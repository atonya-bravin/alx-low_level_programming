#!/bin/bash

gcc *.c -c -fPIC 
rm -rf 0-main.o
gcc *.o -shared -o liball.so
