#include <stdio.h>

// Function to find the single number
int singleNumber(int nums[], int numsSize) {
    int result = 0;

    // XOR all elements
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }

    return result;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int single = singleNumber(nums, n);
    printf("The single number is: %d\n", single);

    return 0;
}
