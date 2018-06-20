/*
 * JavaScript will never tell you if you’ve declared the same variable more
 * than once by using `var`; it simply ignores all subsequent declarations.
 */

var a = 1;
console.log("before repeated declaration, var-declared variable `a` is " + a);
var a;
var a;
console.log(" after repeated declaration, var-declared variable `a` is " + a);


/*
 * But we cannot redeclare variable by using `let` and `const`.
 */

let b = 1;
// let b = 2;   // SyntaxError

const c = 1;
// const a = 1; // SyntaxError
