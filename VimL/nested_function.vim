function! Main()
  function NestedFunc()
    echo "inner: gotcha"
  endfunction

  call NestedFunc()
endfunction

try
  call NestedFunc()
catch /Unknown function: NestedFunc/
  echo "outer: not gotcha"
endtry
