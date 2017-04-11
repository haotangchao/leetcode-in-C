#define SIZE 6
#include <stdio.h>
#include <stdlib.h>
int** generateMatrix(int n) {
    if (n == 0) {
        return NULL;
    }
    int** matrix = (int**)malloc(sizeof(int*) * n);
    for (int j = 0; j < n; j++) {
        matrix[j] = (int*)malloc(sizeof(int) * n);
    }
    int i, k = 0;
    int low = 0, high = n - 1;
    while (high > low) {
        for (i = low; i < high; i++) {
            matrix[low][i] = ++k;
        }
        for (i = low; i < high; i++) {
            matrix[i][high] = ++k;
        }
        for (i = high; i > low; i--) {
            matrix[high][i] = ++k;
        }
        for (i = high; i > low; i--) {
            matrix[i][low] = ++k;
        }
        high--;
        low++;
    }
    if (low == high) {
        matrix[low][high] = ++k;
    }
    
    return matrix;
}

int main(void){
    int** p;
    int i, j;
    p = (int**)malloc(sizeof(int*) * SIZE);
    
    for (i = 0; i < SIZE; i++) {
        p[i] = (int*)malloc(sizeof(int) * SIZE);
    }
    
    p = generateMatrix(SIZE);
    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    
    free(p);
    
    return 0;
}
