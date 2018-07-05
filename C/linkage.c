/*
 *  A C variable has one of the following linkages:
 *
 *      external linkage, internal linkage, or no linkage.
 *
 * Variables with block scope, function scope, or function prototype scope have
 * no linkage. 
 *
 * A variable with file scope can have either internal or external linkage.  A
 * variable with external linkage can be used anywhere in a multifile program.
 * A variable with internal linkage can be used anywhere in a single
 * translation unit.
 */

int external_linkage_v = 1;         // file scope, external linkage
static int internal_linkage_v = 1;  // file scope, internal linkage

int main(void)
{
    int no_linkage_v = 1;           // block scope, no linkage

    return 0;
}
