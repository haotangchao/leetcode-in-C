void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sortColors(int* nums, int numsSize) {
    if (nums == NULL || numsSize < 2) {
        return;
    }
    int low = 0, high = numsSize - 1;
    int i;
    for (i = 0; i <= high;) {
        if (nums[i] == 0) {
            swap(&nums[i++], &nums[low++]);
        }
        else if (nums[i] == 2) {
            swap(&nums[i], &nums[high--]);
        }
        else{
            i++;
        }
    }
}
