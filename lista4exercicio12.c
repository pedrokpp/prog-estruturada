#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMO 20

int main(void){
char string[MAXIMO];
char caracter;
int i;

printf("Digite a palavra desejada: ");
scanf("%s", &string);

printf("\nDigite a letra que deseja remover: ");
scanf(" %c", &caracter);

for(i = 0; i < MAXIMO; i++){
    if(string[i] == caracter)
        string[i] = '\0';
}
printf("\nResultado: ");
for(i = 0; i < MAXIMO; i++){
    printf("%c", string[i]);
}
printf("\n");

return 0;
}
