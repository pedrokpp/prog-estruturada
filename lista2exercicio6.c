#include <stdio.h>
#include <stdlib.h>

int main(void){
int num_sort;
int num_user;
int count = 1;

num_sort = rand()%101;
printf("Digite um numero de 0 a 100: ");
scanf("%d", &num_user);

if(num_user == num_sort)
    printf("\nVoce acertou!\nNumero de tentativas: %d\n", count);

while(num_user != num_sort){
    count += 1;
    if(num_user < num_sort){
        printf("\nO numero sorteado eh maior.\nTente novamente: ");
    }
    if(num_user > num_sort){
        printf("\nO numero sorteado eh menor.\nTente novamente: ");
    }
    scanf("%d", &num_user);
    if(num_user == num_sort)
        printf("\nVoce acertou!\nNumero de tentativas: %d\n", count);
}
}
