// oi.c - le o nome

#include <stdio.h>

int main(void)
{

	char n[31];
	printf("Qual o seu nome? ");

	scanf("%s", n); // nao devemos usar & e scanf ignora espaco

	printf("\nOla %s!\n", n);

	return 0;
}
