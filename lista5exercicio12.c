#include <stdio.h>
#include <stdlib.h>

void info(char *s) {
    char freq[256] = {0};
    int i = 0;
    char c = s[i];
    do {
        if (c != ' ')
            freq[c]++;
        c = s[++i];
    } while (c != '\0');

    for (i = 0; i < 256; i++) {
        if (freq[i] > 0)
            printf("%c:%d\n", i, freq[i]);
    }
}

int main(void)
{
    char s[50] = "o exercicio e facil";
    info(s);

    return EXIT_SUCCESS;
}
