#include <stdio.h>

#define CAPACIDADE 20

int main(){

int idade;
char opiniao;

int quantidade_otimo = 0, quantidade_bom = 0, quantidade_regular = 0, quantidade_ruim = 0, quantidade_pessimo = 0;
int maior_idade_otimo = 0, maior_idade_ruim = 0, maior_idade_pessimo = 0;
int soma_idade_ruim = 0;
float diferenca_percentual;
float media_idade_ruim;

for(int i = 0; i < CAPACIDADE; i++){

    printf("Digite a idade do espectador %d: ", i + 1);
    scanf("%d", &idade);

    printf("Digite a opiniao do espectador %d (o = otimo, b = bom, r = regular, m = ruim, p = pessimo): ", i + 1);
    scanf(" %c", &opiniao);
    printf("\n");


    if(opiniao == 'o'){
        quantidade_otimo++;
        if (idade > maior_idade_otimo)
            maior_idade_otimo = idade;
        }
    if(opiniao == 'b')
        quantidade_bom++;

    if(opiniao == 'r')
        quantidade_regular++;

    if(opiniao == 'm'){
        quantidade_ruim++;
        soma_idade_ruim += idade;
        if (idade > maior_idade_ruim)
            maior_idade_ruim = idade;
        }
    if(opiniao == 'p'){
        quantidade_pessimo++;
        if(idade > maior_idade_pessimo)
            maior_idade_pessimo = idade;
    }
}

printf("\nQuantidade de respostas otimo: %d\n", quantidade_otimo);

diferenca_percentual = (quantidade_bom - quantidade_regular) / quantidade_regular * 100;
printf("Diferenca percentual entre respostas bom e regular: %.2f%%\n", diferenca_percentual);

if(quantidade_ruim > 0){
    media_idade_ruim = (float)soma_idade_ruim / quantidade_ruim;
    printf("Media de idade das pessoas que responderam ruim: %.2f\n", media_idade_ruim);
} else{
    printf("Nenhuma pessoa respondeu ruim.\n");
    }

printf("Porcentagem de respostas pessimo: %.2f%%\n", (float)quantidade_pessimo / 20 * 100);
printf("Maior idade que respondeu pessimo: %d\n", maior_idade_pessimo);

if(maior_idade_otimo > maior_idade_ruim)
    printf("Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d\n", maior_idade_otimo - maior_idade_ruim);
if(maior_idade_otimo < maior_idade_ruim)
    printf("Diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim: %d\n", maior_idade_ruim - maior_idade_otimo);

return 0;
}
