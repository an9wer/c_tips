function CloseHandler(channel)
  echom ch_status(a:channel)
endfunction

function OutHandler(channel, msg)
  echom ch_status(a:channel) a:msg
endfunction

function ErrHandler(channel, msg)
  echoe ch_status(a:channel) a:msg
endfunction

function Main()
  let g:job = job_start(
   \  '/bin/bash -c "sleep 1; echo something"', {
   \    "out_cb": "OutHandler",
   \    "err_cb": "ErrHandler",
   \    "close_cb": "CloseHandler"
   \  })
endfunction

call Main()
