/*
 * The major downside to constructors is that methods are created once for each
 * instance. 
 */

function foo() {
    this.meth = new Function("console.log(1)");
}

var f1 = new foo();
var f2 = new foo();
console.log(f1.meth == f2.meth);
