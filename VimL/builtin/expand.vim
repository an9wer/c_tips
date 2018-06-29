" expand({expr} [, {nosuf} [, {list}]])

" when {expr} starts with '%', '#', '<'
let b:examples = [
  \   'expand("%")',
  \   'expand("#")',
  \   'expand("#1")',
  \   'expand("<cfile>")',
  \   'expand("<afile>")',
  \   'expand("<abuf>")',
  \   'expand("<sfile>")',
  \   'expand("<slnum>")',
  \   'expand("<cword>")',
  \   'expand("<cWORD>")',
  \   'expand("<client>")',
  \ ]

" {expr} modifiers
let b:examples += [
  \   'expand("%:p")',
  \   'expand("%:h")',
  \   'expand("%:t")',
  \   'expand("%:r")',
  \   'expand("%:e")',
  \ ]

" when {expr} doesn't start with '%', '#', '<'
let b:examples += [
  \   'expand("*.vim")',
  \   'expand("~")',
  \ ]

" TODO: argument {nosuf}

" argument {list} is TRUE
let b:examples += [
  \   'expand("*.vim", 0, 1)',
  \ ]

" expand variables and environment variables that are only known in a shell.
let b:examples += [
  \   'expand("$TERM")',
  \   'expand("$FOO")',
  \ ]
