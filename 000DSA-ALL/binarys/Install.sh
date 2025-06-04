#!/bin/bash

echo -e "\033[1;36m🔨 Compiling project...\033[0m"

if gcc ../main.c  ../utilities/ClearScreen.c ../lvl-1-queue/*.c ../lvl-2-stack/*.c ../lvl-3-search/*.c ../lvl-7-Hashing/*.c -o DSA; then
    echo -e "\033[1;32m✅ Build Success! Launch with: ./queue\033[0m"
else
    echo -e "\033[1;31m❌ Build Failed! Check the errors Above ...\033[0m"
fi
