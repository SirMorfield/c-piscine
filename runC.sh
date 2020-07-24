#!/bin/bash
gcc -Wall -Wextra -Werror "$1" && ./a.out && rm -f a.out
