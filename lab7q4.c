#include <stdio.h>

void swapx(int*, int*);

int main()
{
    int a = 30, b = 40;
    swapx(&a, &b); 

    printf("Inside the Caller:\na = %d b = %d\n", a, b);
    return 0;
}

void swapx(int* x, int* y) // Formal Parameters
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("Inside the Function:\nx = %d y = %d\n", *x, *y);
}