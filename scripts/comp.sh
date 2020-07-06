#!/bin/sh

if [ "$#" -eq 0 ]; then
  echo "Usage:- sh comp.sh <filename>"
else
    echo "g++ -O2 -std=c++14 -DLOCAL_DEBUG -o out $1"
    g++ -O2 -std=c++14 -DLOCAL_DEBUG -o out $1
fi 
