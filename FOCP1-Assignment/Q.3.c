#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Using bitwise operators
    while (b != 0) {
        unsigned borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }

    printf("Result = %d", a);
    return 0;
}
