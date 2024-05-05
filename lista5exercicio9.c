#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome[70], endereco[70],telefone[70];
    
    printf("qual o nome? ");
    scanf("%s", nome);
    fflush(stdin);

    printf("qual o endereco? ");
    scanf("%s", endereco);
    fflush(stdin);

    printf("qual o telefone? ");
    scanf("%s", telefone);
    fflush(stdin);

    int len_all = strlen(nome) + strlen(endereco) + strlen(telefone);

    char *str_final = malloc(sizeof(char[len_all]));
    str_final = strcat(str_final, nome);
    str_final = strcat(str_final, endereco);
    str_final = strcat(str_final, telefone);

    printf("final : %s\n", str_final);


    return EXIT_SUCCESS;
}
