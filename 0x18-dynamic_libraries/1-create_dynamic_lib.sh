#!/bin/bash
mkdir -p lib
for c_file in $c_files; do
	gcc -c -fPIC *.c
done
gcc -shared -o liball.so *.o
