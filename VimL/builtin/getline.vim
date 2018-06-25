" getline({lnum} [, {end}])

function Main()
  echo 'getline(1)    :' getline(1)
  echo 'getline(-1)   :' getline(-1)
  echo 'getline(".")  :' getline('.')
  echo 'getline(1, 3) :' getline(1, 3)
  echo 'getline(1, -1):' getline(1, -1)
endfunction
