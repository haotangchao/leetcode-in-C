int* spiralOrder(int** matrix, int m, int n) {
    if (m * n == 0) {
        return NULL;
    }
    
    int left = 0, right = n - 1, top = 0, bottom = m - 1;
    int i, k = 0;
    
    int* spiral = (int *)malloc(sizeof(int) * m * n);
    
    while (1) {
        for (i = left; i <= right; i++) {
            spiral[k++] = matrix[top][i];
        }
        if (++top > bottom) {
            break;
        }
        
        for (i = top; i <= bottom; i++) {
            spiral[k++] = matrix[i][right];
        }
        if (--right < left) {
            break;
        }
        
        for (i = right; i >= left; i--) {
            spiral[k++] = matrix[bottom][i];
        }
        if (--bottom < top) {
            break;
        }
        
        for (i = bottom; i >= top; i--) {
            spiral[k++] = matrix[i][left];
        }
        if (++left > right) {
            break;
        }
    }
    
    
    return spiral;
}
