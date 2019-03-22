#!/bin/bash
if [ $# != 1 ]
then
    echo "argument error!"
    echo "usage: ./build_clean.sh [PROJ_NAME]"
    exit 0
fi

rm -rf ./build/*
sudo rm -rf /usr/local/lib/$1.*
sudo rm -rf /usr/lib/$1.*
sudo rm -rf /usr/local/include/$1
sudo rm -rf /usr/include/$1
echo "done!"
