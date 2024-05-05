#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

char letras[] = "abcdefghijklmnopqrstuvwxyz";
char letra_sort;
char letra_user;
int r;

r = rand()%26;
letra_sort = letras[r];

printf("De^ seu primeiro palpite.\nQual a letra sorteada?\n");
scanf("%c", &letra_user);


if(letra_user == letra_sort)
    printf("\nVoce acertou!\n");
else{
    while(letra_user != letra_sort){
        if(letra_user < letra_sort)
            printf("\nA letra eh maior.\nTente novamente.\nQual a letra sorteada?\n");
        if(letra_user > letra_sort)
            printf("\nA letra eh menor.\nTente novamente.\nQual a letra sorteada?\n");
        scanf("%c", &letra_user);
        if(letra_user == letra_sort)
            printf("\nVoce acertou!\n");
    }
}
}
