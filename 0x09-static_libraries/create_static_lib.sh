#!/bin/bash
gcc -c -L. -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
randlib liball.a
