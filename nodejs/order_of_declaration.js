/*
 * Unlike traditional var-declared variables, which are attached to the entire
 * enclosing function scope regardless of where they appear, let declarations
 * attach to the block scope but are not initialized until they appear in the
 * block.
 */

console.log("we can get the var-declared variable 'a' before declaration, which is " + a);

try { b; } catch (e) {
    console.error("we cannot get the let-declared variable 'b' before declaration");
}

try { c; } catch (e) {
    console.error("we cannot get the const-declared variable 'c' before declaration");
}

var a = 1;
let b = 2;
const c = 3;
