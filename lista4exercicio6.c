#include <stdio.h>

int is_valid(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    if (c == '.' || c == '-' || c == '_')
        return 1;
    return 0;
}

int valida_mail(char *s){
    if (*s == '\0')
        return 0;
    if (!is_valid(*s) || (*s >= '0' && *s <= '9'))
        return 0;

    int has_letter_or_number = 0;
    char prev_char = '\0';

    while (*s != '\0') {
        if (!is_valid(*s))
            return 0;
        if (*s == '.' && (prev_char == '.' || *(s + 1) == '\0'))
            return 0;
        if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z') || (*s >= '0' && *s <= '9'))
            has_letter_or_number = 1;

        prev_char = *s;
        s++;
    }
    if (!has_letter_or_number)
        return 0;

    return 1;
}

int main(){

int validade;
char email[6] = "jsilva";

validade = valida_mail(email);

if(validade == 1)
    printf("Email Valido\n");
if(validade == 0)
    printf("Email Invalido\n");
}
