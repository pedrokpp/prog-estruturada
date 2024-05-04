#include <stdio.h>

int testa_PA(int n, int* v) {
    int razao = v[1] - v[0];
    for (int i = 2; i < n; i++) {
        if (v[i] - v[i-1] != razao) {
            return 0;
        }
    }
    return razao;
}

int main() {
    int vetor[] = {2, 10, 18, 26, 34};
    int comprimento = sizeof(vetor) / sizeof(vetor[0]);

    int result = testa_PA(comprimento, vetor);
    if (result != 0) {
        printf("Os elementos do vetor correspondem a uma PA com razao = %d.\n", result);
    } else {
        printf("Os elementos do vetor não correspondem a uma PA.\n");
    }
    return 0;
}
