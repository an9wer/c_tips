# In the context where an assignment statement is assigning a value to a shell
# variable or array index, the += operator can be used to append to or add to
# the variable's previous value. This includes arguments to builtin commands
# such as declare that accept assignment statements (declaration commands).

# When += is applied to a variable for which the integer attribute has been
# set, value is evaluated as an arithmetic expression and added to the
# variable's current value, which is also evaluated. 

# When += is applied to an array variable using compound assignment, the
# variable's value is not unset (as it is when using =), and new values are
# appended to the array beginning at one greater than the array's maximum index
# (for indexed arrays) or added as additional key-value pairs in an associative
# array.

# When applied to a string-valued variable, value is expanded and appended to
# the variable's value.

