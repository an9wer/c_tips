" setline({lnum}, {text}))

" argument {text} can be string or number
let b:examples = [
  \   'setline(1, "abc")',
  \   'setline(10, 123)',
  \ ]

" argument {text} can be list
let b:examples += [
  \   'setline(10, ["a", "b", "c"])',
  \   'setline(1, [1, 2, 3])',
  \ ]
