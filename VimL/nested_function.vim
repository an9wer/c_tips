let g:auto_call_main = 0

function! Main()
  " It's necessary to add `!` to this function definition to avoid function
  " redefine error when recalling Main().
  function! NestedFunc()
    echo "call from " . expand("<sfile>") . " : gotcha"
  endfunction

  call NestedFunc()
endfunction

function s:GetNestedFunc()
  try
    call NestedFunc()
  catch /Unknown function: NestedFunc/
    echo "call from " . expand("<sfile>") . " : not gotcha"
  endtry
endfunction

call s:GetNestedFunc()
call Main()
call s:GetNestedFunc()
