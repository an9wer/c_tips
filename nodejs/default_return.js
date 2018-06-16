/*
 * thx: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Functions
 *
 * A function without a return statement will return a default value. In the
 * case of a constructor called with the `new` keyword, the default value is
 * the value of its `this` parameter. For all other functions, the default
 * return value is `undefined`.
 */


function foo() {}

var f = foo();
console.log("regular function    : " + f);

var f = new foo();
console.log("constructor function: " + f);
