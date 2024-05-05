#include <stdio.h>
#include <stdlib.h>

void print_str_info(char *str) {
    int i = 0, len = 0;
    char first = str[i], last = '\0';
    char c = first;
    do {
        last = c;
        c = str[++i];
        len++;
    } while (c != '\0');

    printf("primeiro char %c, ultimo char %c, len %d\n", first, last, len);
}

int main(void)
{
    char s[] = "alo";

    print_str_info(s);

    return EXIT_SUCCESS;
}
