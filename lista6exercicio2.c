#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *compactar(char *s) {
    int start = 0, end = strlen(s) - 1;
    while (s[start] == ' ') start++;
    while (s[end] == ' ') end--;
    int len = end - start + 1;
    char *result = (char *)malloc((len + 1) * sizeof(char));
    if (result == NULL) return NULL;
    strncpy(result, s + start, len);
    result[len] = '\0';
    return result;
}

int main() {
    char string[] = "   nota do aluno  ";
    char *compactada = compactar(string);
    if (compactada != NULL) {
        printf("String compactada: \"%s\"\n", compactada);
        free(compactada);
    } else {
        printf("Erro ao alocar memória.\n");
    }
    return 0;
}
