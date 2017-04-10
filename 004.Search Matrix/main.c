bool searchMatrix(int** matrix, int m, int n, int target) {
    int high = m * n - 1;
    int low = 0;
    int mid;
    while (low <= high) {
        mid = (low + high) >> 1;
        if (target == matrix[mid / n][mid % n]) {
            return true;
        }
        if (target > matrix[mid / n][mid % n]) {
            low = mid + 1;
        }
        if (target < matrix[mid / n][mid % n]) {
            high = mid - 1;
        }
    }
    
    return false;
}

int main(void){
    int** p;
    int i, j, k = 0;
    p = (int**)malloc(sizeof(int*) * 4);
    
    for (i = 0; i < 4; i++) {
        p[i] = (int*)malloc(sizeof(int) * 4);
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            p[i][j] = ++k;
        }
    }
    bool b = searchMatrix(p, 4, 4, 7);
    printf("%d\n", b);
    free(p);
    
    return 0;
}
