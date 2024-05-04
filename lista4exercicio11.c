#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define POSICOES 20

int main(void){
int vet1[POSICOES];
int vet2[POSICOES];
char operacoes[POSICOES];
int result[POSICOES];
int i;

for(i = 0; i < POSICOES; i++){
    printf("Digite o %do valor do primeiro vetor: ", (i + 1));
    scanf("%d", &vet1[i]);
}
printf("\n");

for(i = 0; i < POSICOES; i++){
    printf("Digite o %do valor do segundo vetor: ", (i + 1));
    scanf("%d", &vet2[i]);
}
printf("\n");

for(i = 0; i < POSICOES; i++){
    printf("Digite o operador desejado para a %da operacao: ", (i + 1));
    scanf("%s", &operacoes[i]);
}
printf("\n");

printf("Resultados: ");
for(i = 0; i < POSICOES; i++){
    if(operacoes[i] == '+'){
        result[i] = vet1[i] + vet2[i];
        printf("%d ", result[i]);
    }
    if(operacoes[i] == '-'){
        result[i] = vet1[i] - vet2[i];
        printf("%d ", result[i]);
    }
    if(operacoes[i] == '*'){
        result[i] = vet1[i] * vet2[i];
        printf("%d ", result[i]);
    }
    if(operacoes[i] == '/'){
        result[i] = vet1[i] / vet2[i];
        printf("%d ", result[i]);
    }
}
printf("\n");

return 0;
}
