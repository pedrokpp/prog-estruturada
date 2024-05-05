#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[20];
    scanf("%s", s);

    for (int i = strlen(s); i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
