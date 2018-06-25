/*
 * thx: https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/new
 *
 * If you didn't write the `new` operator, the Constructor Function would be
 * invoked like any Regular Function, without creating an Object. In this case,
 * the value of this is also different.
 */

function foo() {
    console.log(this);
}

foo();
new foo();
