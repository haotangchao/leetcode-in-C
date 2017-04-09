#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int low, high, mid;
    low = 0;
    high = numsSize - 1;
    
    while (low <= high) {
        mid = (low + high) >> 1;
        if (nums[mid] == target) {
            return mid;
        }
        else if (target > nums[mid]) {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    
    return low;
}


int main(void){
    int n[] = {2, 3, 5, 6, 9, 20, 23, 44, 65, 76, 99};
    int temp;
    temp = searchInsert(n, 11, 55);
    printf("%d\n", temp);
    return 0;
}
