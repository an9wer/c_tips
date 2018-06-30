" append({lnum}, {expr})

" argument {lnum} can be zero to insert a line before the first one
let b:examples = [
  \   'append(0, 123)',
  \ ]

" argument {expr} can be string or number.
let b:examples = [
  \   'append(1, 123)',
  \   'append(1, "abc")',
  \ ]

" argument {expr} can be list.
let b:examples = [
  \   'append(1, [1, 2, 3])',
  \   'append(1, ["a", "b", "c"])',
  \ ]
