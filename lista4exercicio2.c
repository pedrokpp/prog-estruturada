#include <stdio.h>
#include <stdlib.h>

int main(){
float R[5], S[10], X[5];
int i, j, k = 0;

for (i = 0; i < 5; i++){
    printf("Digite o valor de R[%d]: ", i+1);
    scanf("%f", &R[i]);
}
printf("\n");

for (i = 0; i < 10; i++){
    printf("Digite o valor de S[%d]: ", i+1);
    scanf("%f", &S[i]);
}

for (i = 0; i < 5; i++){
    for (j = 0; j < 10; j++){
        if (R[i] == S[j]){
            X[k] = R[i];
            k++;
        }
    }
}
printf("\nVetor X: ");
for (i = 0; i < k; i++)
    printf("%.2f ", X[i]);

printf("\n");
return 0;
}
