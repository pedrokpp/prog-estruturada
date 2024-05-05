#include <stdio.h>
#include <stdlib.h>

int *premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam) {
    float *medias = malloc(n * sizeof(float));
    if (!medias) {
        *tam = 0;
        return NULL;
    }

    for (int i = 0; i < n; i++) {
        medias[i] = (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
    }

    float max_media = -1;
    for (int i = 0; i < n; i++) {
        if (medias[i] > max_media) {
            max_media = medias[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (medias[i] == max_media) {
            count++;
        }
    }

    int *premiados = malloc(count * sizeof(int));
    if (!premiados) {
        *tam = 0;
        free(medias);
        return NULL;
    }

    *tam = count;
    count = 0;
    for (int i = 0; i < n; i++) {
        if (medias[i] == max_media) {
            premiados[count++] = inscr[i];
        }
    }

    free(medias);
    return premiados;
}

int main() {
    int n = 5;
    int inscr[] = {1, 2, 3, 4, 5};
    float t1[] = {7.5, 8.0, 9.0, 6.5, 7.0};
    int p1 = 2;
    float t2[] = {8.0, 7.5, 9.5, 6.0, 8.0};
    int p2 = 3;
    int tam;

    int *result = premiados(n, inscr, t1, p1, t2, p2, &tam);

    if (result) {
        printf("Premiados: ");
        for (int i = 0; i < tam; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    } else {
        printf("Erro ao alocar memória.\n");
    }

    return 0;
}
