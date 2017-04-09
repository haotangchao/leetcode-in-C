#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int i, j;
    for (i = 1, j = 0; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[++j] = nums[i];
        }
    }
    return numsSize > 0? j + 1: j;
}

int main(void){
    int n[]= {1, 1, 1, 2, 3, 4, 6, 6, 7, 8, 8, 9};
    int number;
    number = removeDuplicates(n, 12);
    printf("%d\n", number);
    return 0;
}
