#include <stdio.h>

#define MAX 50

int inserirOrdenado(int vetor[], int *tamanho, int valor) {
    if (*tamanho >= MAX) return 0;

    int i = *tamanho - 1;

    while (i >= 0 && vetor[i] > valor) {
        vetor[i + 1] = vetor[i];
        i--;
    }

    vetor[i + 1] = valor;
    (*tamanho)++;
    return 1;
}

int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0, fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetor[meio] == valor)
            return meio;
        else if (vetor[meio] < valor)
            inicio = meio + 1;
        else
            fim = meio - 1;
    }

    return -1;
}

void removerElemento(int vetor[], int *tamanho, int valor) {
    int pos = buscaBinaria(vetor, *tamanho, valor);

    if (pos == -1) {
        printf("Elemento %d nao encontrado.\n", valor);
        return;
    }

    for (int i = pos; i < *tamanho - 1; i++) {
        vetor[i] = vetor[i + 1];
    }

    (*tamanho)--;
    printf("Elemento %d removido com sucesso.\n", valor);
}

void imprimirVetor(int vetor[], int tamanho) {
    if (tamanho == 0) {
        printf("Vetor vazio.\n");
        return;
    }
    printf("Vetor atual: ");
    for (int i = 0; i < tamanho; i++) {
        printf("[%d] ", vetor[i]);
    }
    printf("\n(Tamanho atual: %d)\n", tamanho);
}

int main() {
    int vetor[MAX];
    int inicial, tamanho = 0;

    do {
        printf("Digite o tamanho inicial do vetor (3 a 50): ");
        scanf("%d", &inicial);
    } while (inicial < 3 || inicial > 50);

    int valor;
    printf("Digite os %d valores:\n", inicial);
    for (int i = 0; i < inicial; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);
        inserirOrdenado(vetor, &tamanho, valor);
    }

    int opcao;
    do {
        printf("\n--- MENU ---");
        printf("\n1- Imprimir Vetor");
        printf("\n2- Consultar (Busca Binaria)");
        printf("\n3- Remover Elemento");
        printf("\n4- Inserir Elemento");
        printf("\n0- Sair");
        printf("\nOpcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                imprimirVetor(vetor, tamanho);
                break;
            case 2:
                printf("Digite o valor para busca: ");
                scanf("%d", &valor);
                int indice = buscaBinaria(vetor, tamanho, valor);
                if (indice != -1)
                    printf("Elemento encontrado na posicao: %d\n", indice);
                else
                    printf("Elemento nao encontrado (-1)\n");
                break;
            case 3:
                printf("Digite o valor para remover: ");
                scanf("%d", &valor);
                removerElemento(vetor, &tamanho, valor);
                break;
            case 4:
                if (tamanho < MAX) {
                    printf("Digite o valor para inserir: ");
                    scanf("%d", &valor);
                    inserirOrdenado(vetor, &tamanho, valor);
                    printf("Inserido com sucesso!\n");
                } else {
                    printf("Erro: Capacidade maxima (50) atingida!\n");
                }
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("INVALIDO\n");
        }
    } while (opcao != 0);

    return 0;
}