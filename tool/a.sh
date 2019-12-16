#!/bin/bash
#
#1.autoscan
#autoscan   #mv configure.scan  configure.in

#2.aclocal
aclocal

#3.autoconf
autoconf

#4.automake --add-missing
automake --add-missing

#5./configure # -->Makefile
./configure

#6.Make
make
