#include <stdio.h>
#include <stdlib.h>

int substr(char *str, char *substr) {
    int i = 0;
    char c = substr[i];
    do {
        if (str[i] != substr[i])
            return 0;
        c = substr[++i];
    } while (c != '\0');
    return 1;
}

int main(void)
{
    char s1[] = "ola";
    char s2[] = "ola mundo";
    
    printf("eh igual? %d\n", strlen(s1) == strlen(s2) && substr(s2, s1));
    printf("eh substr? %d\n", substr(s2, s1));

    return EXIT_SUCCESS;
}
