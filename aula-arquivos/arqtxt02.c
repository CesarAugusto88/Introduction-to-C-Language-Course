// arqtxt02.c - grava palavra no arquivo texto
// Cesar - 27/02/2025 - Curso de Linguagem C
// Versao 1.0

#include <stdio.h>

int main(void)
{
	FILE *PTRARQ;

	char PALAVRA[20];

	PTRARQ = fopen("ARQTXT01.TXT", "w");

	printf("\n\nEscreva uma palavra: ");
	scanf("%s", PALAVRA); //Vetor é o proprio endereco, nao precisa de &
	
	fprintf(PTRARQ, "%s", PALAVRA);
	fclose(PTRARQ);

	return 0;
}
