" repeat({expr}, {count})

function Main()
  echo 'repeat("-", 79)      :' repeat('-', 79)
  echo 'repeat("-", -1)      :' repeat('-', -1)
  echo 'repeat([1, 2, 3], 3) :' repeat([1, 2, 3], 3)
endfunction
