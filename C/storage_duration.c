/*
 * A C object has one of the following four storage durations:
 *
 *      static storage duration, thread storage duration, automatic storage
 *      duration, or allocated storage duration.
 *
 * 1.   If an object has static storage duration, it exists throughout program
 * execution. Variables with file scope have static storage duration. (Note
 * that for file scope variables, the keyword `static` indicates the linkage
 * type, not the storage duration.)
 *
 * 2.   Thread storage duration comes into play in concurrent programming, in
 * which program execution can be divided into multiple threads. An object with
 * thread storage duration exists from when it’s declared until the thread
 * terminates.
 *
 * 3.   Variables with block scope normally have automatic storage duration.
 * These variables have memory allocated for them when the program enters the
 * block in which they are defined, and the memory is freed when the block is
 * exited.
 */
