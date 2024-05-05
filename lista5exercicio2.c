#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char texto[] = "foi muito facil";
    int i;

    // for loop para pegar todos os char ate o null byte da string
    for (i = 0;texto[i]!='\0';i++) {
        // se o char atual for vazio, sair do loop
        // aqui o compilador reclama por ter um char vazio
        if (texto[i] == '') 
            break;
    }
    i++;
    for (;texto[i]!='\0';i++) {

        printf("%c", texto[i]);
    }

    return EXIT_SUCCESS;
}
