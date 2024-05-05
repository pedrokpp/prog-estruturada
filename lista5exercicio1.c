#include <stdio.h>
#include <stdlib.h>

void num_vogais(char* str, int *qtd_vogais) {
    int i = 0;
    char c = str[i];
    do {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            (*qtd_vogais)++;
        }
        c = str[++i];

    } while (c != '\0');
}

int main(void)
{
    char s[3] = "ola";
    int qtd_vogais = 0;

    num_vogais(s, &qtd_vogais);

    printf("qtd vogais: %02d\n", qtd_vogais);



    return EXIT_SUCCESS;
}
