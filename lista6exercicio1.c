#include <stdio.h>
#include <stdlib.h>

float *acima_da_media(int n, float *vet, int *tam);

int main() {
    float valores[] = {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0, 6.9};
    int tamanho;

    float *resultado = acima_da_media(9, valores, &tamanho);

    if (resultado != NULL) {
        printf("Novo vetor: ");
        for (int i = 0; i < tamanho; i++) {
            printf("%.1f ", resultado[i]);
        }
        printf("\n");
        free(resultado);
    } else {
        printf("Nao foi possivel alocar o novo vetor.\n");
    }

    return 0;
}

float *acima_da_media(int n, float *vet, int *tam) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    float media = soma / n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > media) {
            count++;
        }
    }

    float *vetresposta = (float *)malloc(count * sizeof(float));
    if (vetresposta == NULL) {
        *tam = 0;
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > media) {
            vetresposta[j++] = vet[i];
        }
    }

    *tam = count;
    return vetresposta;
}
