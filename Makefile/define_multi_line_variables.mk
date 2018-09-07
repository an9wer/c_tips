# thx: https://www.gnu.org/software/make/manual/html_node/Multi_002dLine.html#Multi_002dLine
#
# Another way to set the value of a variable is to use the 'define' directive.
# This directive has an unusual syntax which allows newline characters to be
# included in the value, which is convenient for defining both canned sequences
# of commands, and also sections of makefile syntax to use with eval.
#
# The value in an ordinary assignment cannot contain a newline; but the
# newlines that separate the lines of the value in a define become part of the
# variable’s value (except for the final newline which precedes the endef and
# is not considered part of the value). 
#
# You may omit the variable assignment operator if you prefer. If omitted, make
# assumes it to be ‘=’ and creates a recursively-expanded variable. When using
# a ‘+=’ operator, the value is appended to the previous value as with any other
# append operation: with a single space separating the old and new values. 

# define canned sequences of commands
define foo =
echo $a
echo $b
endef

# define sections of makefile syntax to use with eval
define bar =
a := 1
b := 2
endef

all:
	@$(eval $(bar))
	@$(foo)
# or use @$(call foo)
