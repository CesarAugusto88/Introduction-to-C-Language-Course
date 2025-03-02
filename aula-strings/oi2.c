// oi2.c - le o nome

#include <stdio.h>

#define STRSIZE 31

int main(void)
{

	char n[STRSIZE];

	printf("Qual o seu nome? ");

	fgets(n, STRSIZE, stdin);  //fgets le o enter \n e vai jogar caracter ! para baixo

	printf("\nOla %s!\n", n);

	return 0;
}
