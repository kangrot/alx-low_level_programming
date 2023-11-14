#!/bin/bash
gcc *.c -C -fPIC
gcc *.o -shared -o liball.so 
