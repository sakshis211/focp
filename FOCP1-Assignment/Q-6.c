#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long long bin;
        int dec = 0, i = 0, rem;
        printf("Enter binary number: ");
        scanf("%lld", &bin);
        while (bin != 0) {
            rem = bin % 10;
            dec += rem * pow(2, i);
            bin /= 10;
            i++;
        }
        printf("Decimal = %d", dec);
    } else if (choice == 2) {
        int dec, bin[32], i = 0;
        printf("Enter decimal number: ");
        scanf("%d", &dec);
        while (dec > 0) {
            bin[i++] = dec % 2;
            dec /= 2;
        }
        printf("Binary = ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", bin[j]);
    } else {
        printf("Invalid choice!");
    }

    return 0;
}
