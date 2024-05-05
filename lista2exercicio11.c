#include <stdio.h>
#include <math.h>

int calculaPotencia(int base, int expo){

int i;
int resultante = 1;
for(i = 0; i < expo; i++)
    resultante *= base;

return resultante;

}

int main(void){

int base, expo;
printf("Digite o valor da base: ");
scanf("%d", &base);
printf("Digite o valor da potencia: ");
scanf("%d", &expo);

printf("\nValor resultante: %d\n", calculaPotencia(base, expo));

}
