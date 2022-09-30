#!/bin/bash
gcc -c -Wall -Werror -Wextrar *.c
ar -rc liball.a *.o
randlib liball.a
