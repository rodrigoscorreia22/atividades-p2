#include <stdio.h>

#define TAM 5 

void transporMatriz(int matriz[TAM][TAM])

int aux;

    for (int i = 0; i < TAM; i++){
    

    for (int j = i + 1; j < TAM; j++){
        
        aux = matriz[i][j];
        matriz[i][j] = matriz[j][i];
        matriz[j][i] = aux;

        void imprimir(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m[TAM][TAM] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz Quad.:\n");
    imprimir(m);

    transporMatriz(m);

    printf("\nMatriz Transp.:\n");
    imprimir(m);

    return 0;
}
 

    }

}
