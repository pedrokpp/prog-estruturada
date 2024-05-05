#include <stdio.h>
#include <stdlib.h>

int* repeticao(int *vet, int tam) {
    int *res = malloc(sizeof(vet));
    int ri = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vet[i] == vet[j]) {
                res[ri++] = vet[i];
                break;
            }
        }
    }

    return res;
}

int main() {
    int tam;
    scanf("%d", &tam);

    int *vet = malloc(sizeof(int[tam]));
    for (int i = 0; i < tam; i++) {
        int input;
        scanf("%d", &input);
        vet[i] = input;
    }

    int *res = repeticao(vet, tam);
    for (int i = 0; i < tam; i++) {
        printf("%d,", res[i]);
    }

    printf("\n");
    free(res);
    free(vet);
    return 0;
}
