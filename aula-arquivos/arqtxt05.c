// arqtxt05.c - Le frase caractere a caractere
// Cesar - 27/02/2025

#include <stdio.h>

int main(void)
{
	FILE *PTRARQ;

	char LETRA;

	PTRARQ = fopen("FRASE.TXT", "r");

	printf("\n\nFrase = ");

	while((LETRA = fgetc(PTRARQ)) != EOF) //Ler ate o final do arquivo EOF
	    printf("%c", LETRA);
	fclose(PTRARQ);

	return 0;
}
