" see (h: literal-string)
" double single quote in single quotes is treated as a single quote

function! Main()
  echo 'a''b'
  echo strlen('a''b')
endfunction
