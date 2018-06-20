/*
 * the scope in 'immediately invoked function' is private scope.
 */

(function foo() {
    var i = 1;
})();   // immediately invoked function

(function() {
    var j = 2;
})();   // immediately invoked anonymous function

// we cannot get variable 'i' and 'j' here.


/*
 * in ES6, we can create declarations that are bound to any block by using
 * `let`.
 */

{
    let a = 1;
}

// we cannot get variable 'a' here.


/*
 * in ES6, we can also create declarations that are bound to any block by using
 * `const`.
 */

{
    const b = 1;
}

// we cannot get variable 'b' here.
