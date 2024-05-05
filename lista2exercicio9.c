#include <stdio.h>

int inverte(int x){
int num;

printf("Numero escrito ao contrario: ");
while(x != 0){
    num = x % 10;
    printf("%d", num);
    x /= 10;
}
printf("\n\n");
}

int main(){
int num;
int inver;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

inver = inverte(num);
printf("%d", inver);
}
