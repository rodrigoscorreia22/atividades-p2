
Questão Preencher Vetor 

void preencherVetor (int v [], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
}

Questão imprimir Vetor

void imprimirVetor(int v[], int n){
    printf ("{")
    for (int i = 0; i < n; i++){
        printf ("%d", v[i]);

        if (i < n - 1){
            printf (", ");

        }

    }
printf ("}\n");
}

Questão Bubble Sort 

void ordenar 