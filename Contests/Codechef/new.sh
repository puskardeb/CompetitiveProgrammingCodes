#!/bin/sh

if [ "$#" -eq 0 ]; then
  echo "Usage:- sh new.sh <filename>"
else
    echo "cp -f template.cpp $1"
    cp -f template.cpp $1
    echo "subl $1 in.txt"
    subl $1 in.txt
fi 
