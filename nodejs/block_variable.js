/*
 * JavaScript has no concept of block-level scoping, meaning variables defined
 * inside of block statements are actually created in the containing function,
 * not within the statement.
 */

// var-declared variable
(function() {
    { var j = 1; }
    for (var i = 1; i < 10; i++);
    console.log("we can get var-declared variable 'i' and 'j' here, which are " + i + " and " + j + ".");
})()


/*
 * In ES6, we can use `let` and `const` to declare block variable.
 */

// let-declared variable
if (1) {
    let j = 1;

    for (let i = 1; i <= 10; i++) {}
    try { i; } catch (error) {
        console.error("we cannot get let-declared variable 'i' here.");
    }
}
try { j; } catch (error) {
    console.error("we cannot get let-declared variable 'j' here.");
}

// const-declared variable
if (1) {
    const j = 1;

    for (const i = [1]; i[0] <= 10; i[0]++) {}
    try { i; } catch (error) {
        console.error("we cannot get const-declared variable 'i' here.");
    }
}
try { j; } catch (error) {
    console.error("we cannot get const-declared variable 'j' here.");
}
