" Q: get path to the current vimscript being executed
" thx: https://stackoverflow.com/a/18734557
let s:buildin_dir = expand("<sfile>:p:h")

function Main(func)
  let l:func_file = "_" . a:func . ".vim"
  let l:func_file_path = s:buildin_dir . "/" . l:func_file
  if filereadable(l:func_file_path)
    execute "source " . l:func_file_path
    let l:exp_max_len = max(map(copy(b:examples), {k, v -> strlen(v)}))
    for l:exp in b:examples
      " `l:rep` has the same length, and ends with ` :`
      let l:rep = l:exp . repeat(" ", l:exp_max_len - strlen(l:exp)) . " :"
      echo l:rep eval(l:exp)
    endfor
  else
    echoerr a:func "doesn't exist."
  endif
endfunction
