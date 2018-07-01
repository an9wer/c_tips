" simplify({filename})

let b:examples = [
  \   'simplify(".")',
  \   'simplify("..")',
  \   'simplify("a/..")',
  \   'simplify("a/../")',
  \   'simplify("a/../b")',
  \   'simplify("a/../b/")',
  \   'simplify("a/../..")',
  \   'simplify("a/../../")',
  \   'simplify("/a/../..")',
  \   'simplify("/a/../../..")',
  \ ]
