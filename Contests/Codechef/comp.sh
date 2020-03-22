#!/bin/bash

if [ "$#" -eq 0 ]; then
  echo "Usage:- sh comp.sh <filename>"
else
    echo "g++ -O2 -std=c++17 -DZICARD -Wall -Wextra -Wfatal-errors -lm -o out $1"
    g++ -O2 -std=c++17 -DZICARD -Wall -Wextra -Wfatal-errors -lm -o out $1
    echo "./out < in.txt"
    ./out < in.txt
fi 
