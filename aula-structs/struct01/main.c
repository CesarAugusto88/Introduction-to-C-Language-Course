// struct.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main()
{
    struct cadastro c;
    strcpy(c.nome, "Carlos");
    c.idade = 18;
    strcpy(c.rua, "Av. dos Astronautas");
    c.numero = 1082;
    return 0;
}
