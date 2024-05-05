#include <stdio.h>
#include <stdlib.h>

int count(char *str, char find) {
    int i = 0, count = 0;
    char c = str[i];
    do {
        if (c == find)
            count++;
        c = str[++i];
    } while (c != '\0');
    return count;
}

int main(void)
{
    char s[20] = "12345678900987654321";
    int c = count(s, '1');
    printf("o char '1' apareceu %02d vezes\n", c);

    return EXIT_SUCCESS;
}
