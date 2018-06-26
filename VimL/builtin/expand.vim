" expand({expr} [, {nosuf} [, {list}]])

function Main()
  " when {expr} starts with '%', '#', '<'
  echo "expand('%')           :" expand('%')
  echo "expand('#')           :" expand('#')
  echo "expand('#1')          :" expand('#1')
  echo "expand('<cfile>')     :" expand('<cfile>')
  echo "expand('<afile>')     :" expand('<afile>')
  echo "expand('<abuf>')      :" expand('<abuf>')
  echo "expand('<sfile>')     :" expand('<sfile>')
  echo "expand('<slnum>')     :" expand('<slnum>')
  echo "expand('<cword>')     :" expand('<cword>')
  echo "expand('<cWORD>')     :" expand('<cWORD>')
  echo "expand('<client>')    :" expand('<client>')

  " {expr} modifiers
  echo "expand('%:p')         :" expand('%:p')
  echo "expand('%:h')         :" expand('%:h')
  echo "expand('%:t')         :" expand('%:t')
  echo "expand('%:r')         :" expand('%:r')
  echo "expand('%:e')         :" expand('%:e')

  " when {expr} doesn't start with '%', '#', '<'
  echo "expand('*.vim')       :" expand('*.vim')
  echo "expand('~')           :" expand('~')

  " TODO: argument {nosuf}

  " argument {list} is TRUE
  echo "expand('*.vim', 0, 1) :" expand('*.vim', 0, 1)

  " expand variables and environment variables that are only known in a shell.
  echo "expand('$TERM')       :" expand('$TERM')  " TERM is an existed variable
  echo "expand('$FOO')        :" expand('$FOO')   " FOO is not an existed variable
endfunctio
