#include <stdio.h>

// Function to find search insert position
int searchInsert(int nums[], int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    // If target not found, 'left' is the insert position
    return left;
}

int main() {
    int nums[] = {1, 3, 5, 6};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target;

    printf("Enter target value: ");
    scanf("%d", &target);

    int position = searchInsert(nums, size, target);
    printf("The insert position is: %d\n", position);

    return 0;
}

