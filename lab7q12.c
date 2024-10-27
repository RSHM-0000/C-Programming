#include <stdio.h>

int fctorl(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fctorl(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d\n", n, fctorl(n));
    }
    return 0;
}
