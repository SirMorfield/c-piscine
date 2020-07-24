#!/bin/bash
#find . -type f -o -type d | wc -l | sed 's_ __g'
find . -type f -o -type d | wc -l | sed 's/[[:space:]]*//g'
