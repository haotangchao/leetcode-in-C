#include <stdio.h>
#include <stdlib.h>

void rotate(int** matrix, int m, int n) {
    int i, j, temp;
    int* t;
    t = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < m / 2; i++) {
        memcpy(t, matrix[i], sizeof(int) * n);
        memcpy(matrix[i], matrix[n - i - 1], sizeof(int) * n);
        memcpy(matrix[n - i - 1], t, sizeof(int) * n);
    }
    free(t);

    for (i = 0; i < m - 1; i++) {
        for (j = i + 1; j < n; j++) {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
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
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    
    rotate(p, 4, 4);
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    
    free(p);
    
    return 0;
}
