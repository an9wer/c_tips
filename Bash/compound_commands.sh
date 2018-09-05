# { list; }
# list is simply executed in the current shell environment. list must be
# terminated with a newline or semicolon.

{ foo=1; }
echo $foo

# (list)
# list is executed in a subshell environment 

( bar=1 )
echo $bar
