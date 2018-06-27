" split({expr} [, {pattern} [, {keepempty}]])

let b:examples = [
  \   'split(''abc'')',
  \   'split(''a bc'')',
  \   'split(''a b c'')',
  \   'split('' a b c '')',
  \ ]

" add {pattern} argument
let b:examples += [
  \   'split("/a//b/c/", "/")',
  \   'split(''/a@b%c  '', ''\m[/@%]'')',
  \ ]

" add {keepempty} argument
let b:examples += [
  \   "split('/a//b/c/', '/', 1)",
  \ ]
