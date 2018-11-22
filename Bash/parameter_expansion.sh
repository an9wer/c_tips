#!/usr/bin/env bash

. _libs.sh

string=0123456789
examples=(
  '${string:2}'
  '${string:2:4}'
  '${string:2:-2}'
  '${string: -4}'
  '${string: -4:-2}'
)
echo "string=${string}"
tips_printf_example "${examples[@]}"


set -- 0 1 2 3 4 5 6 7 8 9
echo -e "\nset -- 0 1 2 3 4 5 6 7 8 9"
printf '${@}       : '; echo "${@}"
printf '${@:2}     : '; echo "${@:2}"
printf '${@:2:4}   : '; echo "${@:2:4}"
printf '${@:2:-2}  : '; echo "${@:2:-2}"
printf '${@: -4}   : '; echo "${@: -4}"
printf '${@: -4:-2}: '; echo "${@: -4:-2}"


array[0]=0123456789
examples=(
  '${array[0]:2}'
  '${array[0]:2:4}'
  '${array[0]:2:-2}'
  '${array[0]: -4}'
  '${array[0]: -4:-2}'
)
echo -e "\narray[0]=0123456789"
tips_printf_example "${examples[@]}"


array=(0 1 2 3 4 5 6 7 8 9)
examples=(
  '${array[@]:2}'
  '${array[@]:2:4}'
  '${array[@]:2:-2}'
  '${array[@]: -4}'
  '${array[@]: -4:-2}'
)
echo -e "\narray=(0 1 2 3 4 5 6 7 8 9)"
tips_printf_example "${examples[@]}"
