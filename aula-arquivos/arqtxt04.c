/* arqtxt04.c - Cria e grava uma frase caractere a caractere
 * Cesar - 27/02/2025 Curso Linguagem C
 */

#include <stdio.h>

int main(void)
{
	FILE *PTRARQ;
	char LETRA;

	PTRARQ = fopen("FRASE.TXT", "w");

	printf("\n\nEscreva a frase desejada\n\n");

	while((LETRA = getchar()) != '\n') // getchar() pega LETRA por LETRA ate Enter \n sai
		putc(LETRA, PTRARQ); //putc vai pegando LETRA e jogando no arquivo PTRARQ 

	fclose(PTRARQ);

	return 0;

}
