/*
 * A C variable has one of the following scopes:
 *
 *      block scope, function scope, function prototype scope, or file scope
 *
 * 1.   A variable defined inside a block has block scope, and it is visible
 * from the point it is defined until the end of the block containing the
 * definition. Also, formal function parameters, even though they occur before
 * the opening brace of a function, have block scope and belong to the block
 * containing the function body.  
 *
 * 2.   Function scope applies just to labels used with goto statements. This
 * means that even if a label first appears inside an inner block in a
 * function, its scope extends to the whole function. 
 *
 * 3.   Function prototype scope runs from the point the variable is defined to
 * the end of the prototype declaration. 
 * 
 * 4.   A variable with its definition placed outside of any function has file
 * scope. A variable with file scope is visible from the point it is defined to
 * the end of the file containing the definition. 
 * 
 * the variable `j` defined in the block statement and `i` defined in the block
 * statement representing the for loop would be destroyed as soon as the loop
 * completed. 
 */

#include <stdio.h>

static char * file_scope_v = "anything";        // file scope

char * foo(char * function_prototype_scope_v);  // function prototype scope

int main(void)
{
    printf("%s\n", foo("someting"));
    return 0;
}

char * foo(char * block_scope_v1)                                           // block scope
{
    { int block_scope_v2 = 1; }                                             // block scope
    for (int block_scope_v3 = 1; block_scope_v3 < 10; block_scope_v3++);    // block scope (C99 and later)

    return block_scope_v1;
}
