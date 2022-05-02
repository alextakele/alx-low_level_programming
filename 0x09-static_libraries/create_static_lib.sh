#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
