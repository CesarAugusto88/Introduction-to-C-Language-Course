#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s;
	char nome[10];

	printf("Escolha uma inicial (M) ou (J)? ");
	scanf("%c", &s);
	s = toupper(s);

	printf("Escreva seu primeiro nome: ");
        scanf("%s", &nome);
	printf("seu nome: %s\n", nome);
	switch(s)
	{
	case 'M': printf("Maria\n"); break;
	case 'J': printf("Joao\n"); break;
	default : printf("Invalido\n"); break;
	}
	
	return 0;
}
