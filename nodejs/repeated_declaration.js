/*
 * JavaScript will never tell you if you’ve declared the same variable more
 * than once; it simply ignores all subsequent declarations 
 */

(function() {
    var val = 1;
    console.log("before repeated declaration, val is " + val);
    var val;
    var val;
    console.log(" after repeated declaration, val is " + val);
})()
