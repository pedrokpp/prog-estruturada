#include <stdio.h>
#include <strings.h>

int main(void)
{
    char s1[50] = "hello";
    char s2[50] = "world";
    char result[100];

    sprintf(result, "%s %s", s1, s2);
    printf("%s\n", result);

    printf("strcmp s1,s2: %d\n", strcmp(s1, s2));
    char s3[] = "!  4uadhuiqwhe";
    strncat(result, s3, 4);
    printf("strncat: %s\n", result);
}
