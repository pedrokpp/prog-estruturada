#include <stdio.h>
#include <string.h>

#define MAXX 50

int main(void){

char input[MAXX + 1];
int count[256] = {0};
printf("Digite uma string (max. 50 caracteres): ");
fgets(input, sizeof(input), stdin);

input[strcspn(input, "\n")] = '\0';

for (int i = 0; input[i] != '\0'; i++) {
    count[(unsigned char)input[i]]++;
    }

printf("Estatisticas dos caracteres digitados:\n");
for (int i = 0; i < 256; i++) {
    if (count[i] > 0)
        printf("'%c' = %d, ", i, count[i]);
    }
    printf("\n");

    return 0;
}
