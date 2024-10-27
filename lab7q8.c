#include <stdio.h>

void abv(int x) {
    if (x < 0) {
        x = -x;
    }
    printf("The absolute value is %d\n", x);
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    abv(x);
    return 0;
}
