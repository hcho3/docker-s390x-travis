#!/bin/bash

set -e
set -x

g++ -o test test.cc -O3 -Wall -Wextra
./test
