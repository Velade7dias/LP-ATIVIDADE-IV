#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

void numeroTelefone(char numero[], char nome[], char nomeEscrito[]){
    if (strcmp(nome, nomeEscrito) == 0){
        printf("Número de telefone: %s\n", numero);
    }
}

struct contato{
    char nome[500];
    char numero[500];
    char email[500];
};

int main () {

    setlocale(LC_ALL, "portuguese");

    int i;
    char nomeEscrito[500];
    struct contato contatos[3];

    for (i = 0; i < 3; i++){
        printf("Informações do %dº contato\n\n", i+1);
        printf("Nome: ");
        gets(contatos[i].nome);
        printf("Número de telefone: ");
        gets(contatos[i].numero);
        printf("E-mail: ");
        gets(contatos[i].email);
        system("cls || clear");
    }
    system("cls || clear");

    printf("Digite o nome do contato que deseja buscar: ");
    gets(nomeEscrito);

    for (i = 0; i < 3; i++){
        numeroTelefone(contatos[i].numero, contatos[i].nome, nomeEscrito);
    }

getchar();

    return 0;
}