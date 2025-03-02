// arqtxt01.c - criacao de um arquivo .txt
// Cesar - 27/02/2025

#include <stdio.h> // biblioteca com comandos de entrada e saida (io) e tambem tem arquivos

int main(void)
{
	FILE *PTRARQ;  // define ponteiro para o arquivo
	
	PTRARQ = fopen("ARQTXT01.TXT", "a");
	
	fclose(PTRARQ);

}
