#!/usr/bin/env bash

# There are two types of array in bash: indexed array and associative array.

declare -a indexed_array=(a b c d)
declare -A associative_array=([a]=A [b]=B [c]=C [d]=D)

declare -p indexed_array associative_array

indexed_array[0]=a
indexed_array[1]=b
indexed_array[1+1]=c
indexed_array[9/3]=d

declare -A associative_array
associative_array[a]=A
associative_array[b]=B
associative_array[c]=C
associative_array[d]=D

declare -p indexed_array associative_array
