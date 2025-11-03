#include <stdio.h>
int main() {
    int n, i, sum = 0;
    float avg;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float)sum / n;
    printf("Average = %.2f", avg);
    return 0;
}
