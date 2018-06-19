/*
 * When a property contains a `reference value`, Changing the `reference value`
 * will influence all instance.
 */

function foo() {}
foo.prototype.author = ["an9wer"];

var f1 = new foo();
var f2 = new foo();

f1.author.push("others");
console.log(f2.author);
