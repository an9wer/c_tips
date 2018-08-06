/*
 * We can use only constant expressions, such as 5, enumeration constants and
 * sizeof expressions, to initialize file scope variables, this doesn't include
 * values declared using `const`.
 */

const int SIZE1 = 5;
#define SIZE2 5
enum { SIZE3 = 5 };

// int arr1[SIZE1];     // not allowed
int arr2[SIZE2];
int arr3[SIZE3];
int arr4[sizeof(char)];
int arr5[5];

// int size1 = SIZE1;   // not allowed
int size2 = SIZE2;
int size3 = SIZE3;
int size4 = sizeof(char);
int size5 = 5;

int main(void)
{
    return 0;
}
