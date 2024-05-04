#include <stdio.h>
#define MAX 10

int main(){
int x[MAX];
int y[MAX];
int i;


for(i = 0; i < MAX; i++){
    printf("Digite o %do elemento de X: ", (i + 1));
    scanf("%d", &x[i]);
}

printf("\nVetor Y: ");
for(i = 0; i < MAX; i++){
    y[i] = x[(MAX - (i + 1))];
    printf("%d ", y[i]);
    }
printf("\n");
}
