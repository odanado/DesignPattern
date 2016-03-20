#!/bin/bash

mkdir $1/build && cd $1/build
cmake ../test && make && ./"$1Test" 

