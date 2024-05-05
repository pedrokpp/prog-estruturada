#include <stdio.h>
#include <stdlib.h>
#include <strings.h>


void abreviar(char *str, char *final) {
    int i = 0;
    char c = str[i];

    int fi = 0;


    char first_word = c;
    do {
        if (c == ' ') {
            final[fi++] = first_word;
            final[fi++] = '.';
            first_word = '\0';
        } else {
            if (first_word == '\0')
                first_word = c;
        }
        c = str[++i];
    } while (c != '\0');

    final[fi++] = first_word;
    final[fi++] = '.';
}

int main(void)
{

    char final[20];
    abreviar("pedro paraguai", final);
    printf("abreviado: %s\n", final);

    return EXIT_SUCCESS;
}
