#include <stdio.h>

#define NUM_ALUNOS 30 

typedef struct {
    float nota 1
    float nota 2
    float nota 3
} 

void ler_e_calcular(struct Aluno alunos[]) {
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Digite a primeira nota: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &alunos[i].nota2);
        
        alunos[i].media = (alunos[i].nota1 * 2.0 + alunos[i].nota2 * 3.0) / 5.0;
        printf("---\n");
    }
}

float calcular_media_turma(struct Aluno alunos[]) {
    float soma = 0.0;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        soma += alunos[i].media;
    }
    return soma / NUM_ALUNOS;
}

void imprimir_acima_media(struct Aluno alunos[], float media_turma) {
    printf("A MEDIA GERAL DA TURMA E: %.2f\n", media_turma);
    printf("\nALUNOS ACIMA DA MEDIA DA TURMA:\n\n");
    
    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].media > media_turma) {
            printf("Aluno %d:\n", i + 1);
            printf("  Nota 1: %.2f\n", alunos[i].nota1);
            printf("  Nota 2: %.2f\n", alunos[i].nota2);
            printf("  Media:  %.2f\n", alunos[i].media);
            printf("---\n");
        }
    }
}

int main() {
    struct Aluno alunos[NUM_ALUNOS];
    float media_turma;

    ler_e_calcular(alunos);
    
    media_turma = calcular_media_turma(alunos);
    
    imprimir_acima_media(alunos, media_turma);

    return 0;
}

