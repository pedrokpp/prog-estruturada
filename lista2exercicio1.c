#include <stdio.h>

int main(void){
int num;
int i;
printf("Digite o numero a ser verificado: ");
scanf("%d", &num);

if(num == 1)
    printf("NUMERO NAO PRIMO\n");

for(i = 2; i <= num; i++){
    if(i == num){
        printf("NUMERO PRIMO\n");
        break;
    }
    if((num % i) == 0){
        printf("NUMERO NAO PRIMO\n");
        break;
    }
    }
}
