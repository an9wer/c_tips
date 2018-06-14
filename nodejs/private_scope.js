/*
 * the scope in 'immediately invoked function' is private scope.
 */

(function() {
    (function foo() {
        var i = 1;
    })();   // immediately invoked function

    (function() {
        var j = 2;
    })();   // immediately invoked anonymous function

    console.log("we cannot get variable 'i' and 'j' here.");
})()
