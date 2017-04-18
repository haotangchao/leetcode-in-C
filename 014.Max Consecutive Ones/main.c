int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0, sum = 0;
    int i;
    for (i = 0; i < numsSize; i++) {
        /*
        if (nums[i] == 1) {
            sum++;
        }
        else if (nums[i] == 0){
            sum = 0;
        }
        */
        sum = (sum + nums[i]) * nums[i];  // 上面的代码也可以用这句话代替
        
        if (sum > max) {
            max = sum;
        }
    }
    
    return max;
}
