#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* cifra_cesar(char* msg);

int main() {
    char mensagem[1000];
    char* mensagem_codificada;

    printf("Digite a mensagem a ser codificada: ");
    fgets(mensagem, sizeof(mensagem), stdin);

    mensagem_codificada = cifra_cesar(mensagem);

    printf("Mensagem codificada: %s\n", mensagem_codificada);

    free(mensagem_codificada);

    return 0;
}

char* cifra_cesar(char* msg) {
    char* codificada = (char*)malloc(strlen(msg) + 1);

    if (codificada == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(1);
    }

    int i;
    for (i = 0; msg[i] != '\0'; i++) {
        if ((msg[i] >= 'a' && msg[i] <= 'z') || (msg[i] >= 'A' && msg[i] <= 'Z')) {
            if (msg[i] >= 'x' && msg[i] <= 'z') {
                codificada[i] = msg[i] - 23;
            } else {
                codificada[i] = msg[i] + 3;
            }
        } else {
            codificada[i] = msg[i];
        }
    }

    codificada[i] = '\0';

    return codificada;
}
