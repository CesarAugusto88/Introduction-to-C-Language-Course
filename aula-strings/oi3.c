// oi3.c - le o nome

#include <stdio.h>
#include <string.h>
#define STRSIZE 31

int main(void)
{
	char n[STRSIZE];
	printf("Qual o seu nome? ");
	fgets(n, STRSIZE, stdin);
	int len = strlen(n);
	// Remove '\n' e troca por '\0' (que eh NULL)
	n[len - 1] = '\0';
	printf("\nOla %s!\n", n);
	return 0;
}
