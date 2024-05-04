#include <stdio.h>
#include <string.h>

int verificaMinuscula(char c){
    return c >= 'a' && c <= 'z';
}

char tornaMaiuscula(char c){
    if(verificaMinuscula(c)){
        return c - ('a' - 'A');
    }
    return c;
}

char tornaMinuscula(char c){
    if (c >= 'A' && c <= 'Z'){
        return c + ('a' - 'A');
    }
    return c;
}

void CamelCase(char *s){
int tamanho = strlen(s);
int i;

s[0] = tornaMinuscula(s[0]);

for (i = 1; i < tamanho; i++){
    if (s[i] == ' '){
        s[i + 1] = tornaMaiuscula(s[i + 1]);
        memmove(&s[i], &s[i + 1], strlen(&s[i + 1]) + 1);
        tamanho--;
        }
    }
}

int main(){

char s[20];
strcpy(s, "media da turma");
CamelCase(s);

printf("%s\n", s);
}
