//arrays 
#include <stdio.h>

int main() {
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67}
    };

    int matrix1[2][2];
    int matrix2[2][2];

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            matrix1[i][j] = scores[i][j];
        }
    }

    for(int i = 2; i < 4; i++) {
        for(int j = 0; j < 2; j++) {
            matrix2[i-2][j] = scores[i][j];
        }
    }

    printf("Matrix 1:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix 2:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}