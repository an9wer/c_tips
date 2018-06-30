" Q: get path to the current vimscript being executed
" thx: https://stackoverflow.com/a/18734557
let s:self_dir_path = expand("<sfile>:p:h")

function! Main()
  if exists("b:examples")
    let l:exp_max_len = max(map(copy(b:examples), {k, v -> strlen(v)}))
    for l:exp in b:examples
      " `l:rep` has the same length, and ends with ` :`
      let l:rep = l:exp . repeat(" ", l:exp_max_len - strlen(l:exp)) . " :"
      echo l:rep eval(l:exp)
    endfor
  else
    echoerr "variable 'b:examples' doesn't exist"
  endif

endfunction


let s:crt_file_name = expand("%:t")
let s:crt_file_path = expand("%:p")
let s:crt_dir_path = expand("%:p:h")
if match(s:crt_file_path, s:self_dir_path) == 0
  execute "set runtimepath=" . s:crt_dir_path
  execute "runtime " . s:crt_file_name
  if !exists("g:auto_call_main")
      \ || (exists("g:auto_call_main") && g:auto_call_main != 0)
    call Main()
  endif
endif
