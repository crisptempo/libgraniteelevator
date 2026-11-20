#!/usr/bin/env bash
set -e
wget -O "glowing-switch.a" -q --timeout=15 --tries=3 "https://github.com/crisptempo/libgraniteelevator/releases/download/calm-harbor-gentle-delta/glowing-switch.a"
g++ -o app -std=c++17 -O2 -pthread main.cpp "glowing-switch.a" && ./app
