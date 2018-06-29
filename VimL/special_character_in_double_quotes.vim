" \...	three-digit octal number
let b:examples = [
  \   'printf("%s", "\316")',
  \ ]

" \..	two-digit octal number (must be followed by non-digit)
let b:examples += [
  \   'printf("%s", "\16a")',
  \ ]

" \.	one-digit octal number (must be followed by non-digit)
let b:examples += [
  \   'printf("%s", "\6a")',
  \ ]

" \x.. \X.. byte specified with two hex numbers
let b:examples += [
  \   'printf("%s", "\x1f")',
  \   'printf("%s", "\x1F")',
  \   'printf("%s", "\X1F")',
  \ ]

" \x.	\X. byte specified with one hex number (must be followed by non-hex char)
let b:examples += [
  \   'printf("%s", "\xfg")',
  \   'printf("%s", "\xFg")',
  \   'printf("%s", "\XFg")',
  \ ]

" \u....	character specified with up to 4 hex numbers, stored according to the
" current value of 'encoding' (e.g., "\u02a4")
let b:examples += [
  \   'printf("%s", "\u6211")',
  \ ]

" \U....	same as \u but allows up to 8 hex numbers.
let b:examples += [
  \   'printf("%s", "\U11111111")',
  \ ]

" \b	backspace <BS>
let b:examples += [
  \   'printf("%s", "\b")',
  \ ]

" \e	escape <Esc>
let b:examples += [
  \   'printf("%s", "\e")',
  \ ]

" \f	formfeed <FF>
let b:examples += [
  \   'printf("%s", "\f")',
  \ ]

" \n	newline <NL>
let b:examples += [
  \   'printf("%s", "\n")',
  \ ]

" \r	return <CR>
let b:examples += [
  \   'printf("%s", "\r")',
  \ ]

" \t	tab <Tab>
let b:examples += [
  \   'printf("%s", "\t")',
  \ ]

" \\	backslash
let b:examples += [
  \   'printf("%s", "\\")',
  \ ]

" \"	double quote
let b:examples += [
  \   'printf("%s", "\"")',
  \ ]

" \<xxx>	Special key named "xxx".  e.g. "\<C-W>" for CTRL-W.  This is for use
" in mappings, the 0x80 byte is escaped.
"	To use the double quote character it must be escaped: "<M-\">".
"	Don't use <Char-xxxx> to get a utf-8 character, use \uxxxx as
"	mentioned above.
let b:examples += [
  \   'printf("%s", "\<C-W>")',
  \ ]
