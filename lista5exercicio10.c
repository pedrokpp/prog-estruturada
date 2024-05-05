#include <stdio.h>
#include <string.h>

#define MAX_USERNAME_LENGTH 8
#define MAX_PASSWORD_LENGTH 20

void cadastrarUsuario(char *username, char *password) {
    printf("Digite um nome de usuário (máximo de 8 caracteres): ");
    scanf("%s", username);
    fflush(stdin);

    printf("Digite uma senha: ");
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n' && ch != '\0') {
        if (i < MAX_PASSWORD_LENGTH - 1) {
            password[i++] = ch;
            fflush(stdin);
            printf("*");
        }
    }
    password[i] = '\0'; 
}

int login(char *savedUsername, char *savedPassword) {
    char username[MAX_USERNAME_LENGTH + 1];
    char password[MAX_PASSWORD_LENGTH + 1];

    printf("\nFaça o login\n");
    printf("Nome de usuário: ");
    scanf("%s", username);
    fflush(stdin);

    printf("Senha: ");
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n' && ch != '\0') {
        if (i < MAX_PASSWORD_LENGTH - 1) {
            password[i++] = ch;
    fflush(stdin);
        }
    }
    password[i] = '\0'; 

    if (strcmp(savedUsername, username) == 0 && strcmp(savedPassword, password) == 0) {
        printf("\nOK\n");
        return 1;
    } else {
        printf("\nAcesso Negado\n");
        return 0;
    }
}

int main() {
    char savedUsername[MAX_USERNAME_LENGTH + 1];
    char savedPassword[MAX_PASSWORD_LENGTH + 1];

    cadastrarUsuario(savedUsername, savedPassword);
    login(savedUsername, savedPassword);

    return 0;
}
