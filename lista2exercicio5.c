#include <stdio.h>

int main(void){
int x;
int z;
int i;
int soma;

printf("Digite o valor de X: ");
scanf("%d", &x);
printf("Digite o valor de Z: ");
scanf("%d", &z);
while(z < x){
    printf("Digite um novo valor para Z que seja maior ou igual a X: ");
    scanf("%d", &z);
}
for(soma = (-1); soma <= z; i++){
    soma += x;
    x += 1;
}
printf("%d", i);
}
