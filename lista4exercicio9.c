#include <stdio.h>
#define TAMANHO 7

int geraVetor(int vetor[]){
int i;

for(i = 0; i < TAMANHO; i++){
    printf("Digite o %do valor: ", (i + 1));
    scanf("%d", &vetor[i]);
}
printf("\n");
}

int listaVetor(int vetor[]){
int i;

for(i = 0; i < TAMANHO; i++){
    printf("vetor[%d] = %d\n", i, vetor[i]);
}
printf("\n");
}

int buscaNum(int vetor[]){
int i, num;

printf("Digite o valor inteiro a ser pesquisado no vetor: ");
scanf("%d", &num);
for(i = 0; i <= TAMANHO; i++){
    if(i == TAMANHO)
        return -1;
    if(vetor[i] == num)
        printf("\nO numero %d se encontra na posicao: vetor[%d]\n", num, i);
}
printf("\n");
}

int somaAntecessores(int vetor[]){
int i, j;
int auxiliar[TAMANHO];

printf("\nNovo vetor: ");
auxiliar[0] = vetor[0];
printf("%d ", auxiliar[0]);

for(i = 1; i < TAMANHO; i++){
    auxiliar[i] = vetor[i] + auxiliar[i - 1];
    printf("%d ", auxiliar[i]);
}
printf("\n");
}

int main(void){
int vetor[TAMANHO];

geraVetor(vetor);

listaVetor(vetor);

buscaNum(vetor);

somaAntecessores(vetor);
}
