" :h return

function s:WithoutReturn()
endfunction

function s:WithoutExpr()
  return
endfunction

function! Main()
  echo "function without return  :" s:WithoutReturn()  
  echo "function returns nothing :" s:WithoutExpr()
endfunction
