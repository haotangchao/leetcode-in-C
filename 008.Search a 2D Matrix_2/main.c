bool searchMatrix(int** matrix, int m, int n, int target) {
    if (m * n == 0)
        return false;
    int i = m - 1;
    int j = 0;
    while (i >= 0 && j <= n - 1) {
        if (target == matrix[i][j]) {
            return true;
        }
        else if (target > matrix[i][j]) {
            j++;
        }
        else if (target < matrix[i][j]) {
            i--;
        }
    }
    
    return false;
}
