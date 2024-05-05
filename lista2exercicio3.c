#include <stdio.h>

int main(void){
int num;
int i;
int a = 0;
int b = 1;
int c;

printf("Digite a quantidade de termos desejados: ");
scanf("%d", &num);

for(i = 0; i < num; i++){
    c = a + b;
    printf("%d ", b);
    a = b;
    b = c;
}
}
