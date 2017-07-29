#!/usr/bin/env bash
clang -std=c99 -c $1 -o $2 -emit-llvm
