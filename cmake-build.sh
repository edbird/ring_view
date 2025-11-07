#!/bin/bash

cmake --preset=release -DCMAKE_CXX_COMPILER=g++-14
cmake --build --preset=release -j$(nproc)