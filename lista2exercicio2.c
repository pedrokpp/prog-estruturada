#include <stdio.h>

int main(void){
int num;
int i;
int soma = 0;
printf("Digite a quantidade desejada de numeros impares: ");
scanf("%d", &num);

for(i = 0; i < num; i++)
    soma += 2 * i + 1;
printf("Soma dos %d primeiros numeros impares = %d\n", num, soma);
}
