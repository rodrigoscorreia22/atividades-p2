#include <stdio.h>

#define LIN 2
#define COL 3

void somar_matrizes(const int matA[LIN][COL], 
                    const int matB[LIN][COL], 
                    int matSoma[LIN][COL]) {
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            matSoma[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

int main() {
    int matrizA[LIN][COL] = {
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizB[LIN][COL] = {
        {15, 25, 35},
        {45, 55, 65}
    };

    int matrizSoma[LIN][COL];

    somar_matrizes(matrizA, matrizB, matrizSoma);

    printf("Resultado da Matriz Soma:\n");
    for (int i = 0; i < LIN; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}

