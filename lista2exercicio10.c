#include <stdio.h>

int mdc(int x, int y){

int mdc;
int i;

for(i = 1; i <= x && i <= y; i++){
    if((x % i == 0) && (y % i == 0))
        mdc = i;
}
return mdc;
}

int main(void){

int x, y;
printf("Digite dois numeros inteiros: ");
scanf("%d %d", &x, &y);

printf("\nMaior divior comum de %d e %d: %d\n", x, y, mdc(x, y));

}
