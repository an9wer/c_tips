function s:CloseHandler(channel)
  echom "CloseHandler :" ch_status(a:channel)
endfunction

function s:ExitHandler(job, es)
  echom "ExitHandler :" a:job a:es
endfunction

function s:OutHandler(channel, msg)
  echom "OutHandler :" ch_status(a:channel) a:msg
endfunction

function s:ErrHandler(channel, msg)
  echoe "ErrHandler :" ch_status(a:channel) a:msg
endfunction

function! Main()
  let l:CloseHandler = function("s:CloseHandler")
  let l:ExitHandler = function("s:ExitHandler")
  let l:OutHandler = function("s:OutHandler")
  let l:ErrHandler = function("s:ErrHandler")

  let l:job = job_start(["/bin/bash", "-c", "sleep 1; echo something"], {
    \   "close_cb": l:CloseHandler,
    \   "exit_cb": l:ExitHandler,
    \   "out_cb": l:OutHandler,
    \   "err_cb": l:ErrHandler,
    \ })

  2sleep
endfunction
