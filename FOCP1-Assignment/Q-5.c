#include <stdio.h>

int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("Point lies in First Quadrant");
    else if (x < 0 && y > 0)
        printf("Point lies in Second Quadrant");
    else if (x < 0 && y < 0)
        printf("Point lies in Third Quadrant");
    else if (x > 0 && y < 0)
        printf("Point lies in Fourth Quadrant");
    else if (x == 0 && y == 0)
        printf("Point lies at Origin");
    else if (x == 0)
        printf("Point lies on Y-axis");
    else
        printf("Point lies on X-axis");

    return 0;
}
