// 这段代码在XCODE上运行通过了，在leetcode上没通过，不懂
int* countBits(int num, int* returnSize) {
    num++;
    *returnSize = num;
    int* array = (int*)malloc(num * sizeof(int));
    array[0] = 0;
    
    for (int i = 1 ; i <= num; i++) {
        array[i] = array[i>>1] + (i&1);
    }
    return array;
}
