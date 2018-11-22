#!/usr/bin/env bash

tips_printf_example() {
  local exp len=0

  for exp in "$@"; do
    (( ${#exp} >= ${len} )) && len=${#exp}
  done

  for exp in "$@"; do
    printf "%-${len}s: " "${exp}"; eval echo "${exp}"
  done
}
