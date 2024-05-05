#include <stdio.h>
#include <stdlib.h>

int *aprovados(int n, int *mat, float *notas, int *tam) {
    int i, count = 0;

    for (i = 0; i < n; i++) {
        if (notas[i] >= 5.0) {
            count++;
        }
    }

    *tam = count;
    int *aprovados = (int *)malloc(count * sizeof(int));

    count = 0;
    for (i = 0; i < n; i++) {
        if (notas[i] >= 5.0) {
            aprovados[count++] = mat[i];
        }
    }

    return aprovados;
}

int main() {
    int n = 5;
    int matriculas[] = {123, 456, 789, 1011, 1213};
    float notas[] = {4.5, 7.8, 6.2, 3.9, 8.0};
    int tamanho;

    int *aprovados_matriculas = aprovados(n, matriculas, notas, &tamanho);

    printf("Matriculas dos aprovados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", aprovados_matriculas[i]);
    }

    free(aprovados_matriculas);

    return 0;
}
