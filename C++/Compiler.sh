#!/bin/bash

archivo="$1" 

g++ "$archivo.cpp" -o "$archivo.out"

"./$archivo.out"

#sudo nano /usr/local/bin/ccpp