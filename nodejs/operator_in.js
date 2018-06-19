/*
 * There are two ways to use the in operator: on its own or as a for-in loop.
 *
 * 1. When used on its own, the in operator returns true when a property of the
 * given name is accessible by the object, which is to say that the property
 * may exist on the instance or on the prototype.  
 *
 * 2. When using a for-in loop, all properties that are accessible by the
 * object and can be enumerated will be returned, which includes properties
 * both on the instance and on the prototype.
 */


function foo() {}
foo.prototype.author = "an9wer";

var f = new foo();

console.log("when used on its own:");
if ("author" in f) {
    console.log("   property `author` is accessible");
}

console.log("when using a for-in loop:");
for (var p in f) {
    console.log("   we can find property " + p);
}
