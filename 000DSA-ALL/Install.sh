#!/bin/bash

echo "🔨 Compiling project..."

if gcc main.c lvl-1-queue/*.c -o queue; then
    echo "✅ Build successful! Run with: ./queue"
else
    echo "❌ Build failed. Check the errors above."
fi
