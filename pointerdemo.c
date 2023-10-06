#include <stdio.h>

int main()
{
    // reference variable
    int x = 20; // 25000  // you can store value in variable x
    int *p;     // pointer variable - to store the address - memory address

    p = &x; // address of x

    *p = 1000; //  *p-> value at p  x => 1000

    printf("\nx = %d ", x);
    return 0;
}

// take two numbers from user , swap it
// a = 10
// b = 20

// a => 20
// b => 10
