#!/usr/bin/env sh
make clean
rm -f config.h
make
sudo make install
