#include <stdio.h>
#include <stdlib.h>

void repeticao(int *vet, int tam) {
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vet[i] == vet[j]) {
                printf("%d, ", vet[i]);
                break;
            }
        }
    }
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

    repeticao(vet, tam);

    printf("\n");
    free(vet);
    return 0;
}
