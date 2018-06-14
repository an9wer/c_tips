/*
 * JavaScript has no concept of block-level scoping, meaning variables defined
 * inside of block statements are actually created in the containing function,
 * not within the statement.
 */

(function() {
    { var j = 1; }
    for (var i = 1; i < 10; i++);
    console.log("we can get variable 'i' and 'j' here, which are " + i + " and " + j + ".");
})()
