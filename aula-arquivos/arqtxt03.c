//arqtxt03.c - leitura de um arquivo txt
// Cesar - 27/02/2025 - Curso Linguagem C

#include <stdio.h>

int main(void)
{
	FILE *PTRARQ;
	char PALAVRA[20];
	PTRARQ = fopen("ARQTXT01.TXT", "r");
	fscanf(PTRARQ, "%s", PALAVRA);
	printf("Palavra = %s", PALAVRA);
	fclose(PTRARQ);
	return 0;
}
