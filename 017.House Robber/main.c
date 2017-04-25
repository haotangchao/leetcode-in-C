#define max(a,b) ((a) > (b) ? (a) : (b))

int rob(int* nums, int numsSize) {
    int temp0 = nums[0];
    int temp1 = max(nums[0], nums[1]);
    int temp2;
    int i;
    for (i = 2; i < numsSize; i++) {
        temp2 = temp1;
        temp1 = max(temp0 + nums[i], temp1);
        temp0 = temp2;
    }
    
    return max(temp0, temp1);
}

int main(void){
    int a[] = {3, 2, 1, 6, 7, 9, 2, 3, 4};
    int b = rob(a, 9);
    printf("%d\n", b);
    
    return 0;
}
