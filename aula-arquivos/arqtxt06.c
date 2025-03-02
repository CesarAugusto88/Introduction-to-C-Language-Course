// arqtxt06.c - cria e grava frases
// Cesar - 27/02/2025 Curso de Linguagem C
/*referencias:
 https://wiki.inf.ufpr.br/maziero/doku.php?id=c:start
 https://quickref.me/c
**/
#include <stdio.h>

int main(void)
{
	FILE *PTRARQ;
	char RESP, FRASE[81];
	RESP = 'S';
	PTRARQ = fopen("FRASE2.TXT", "w");

	while(RESP == 'S' || RESP == 's')
	{
		printf("\n\nEscreva uma frase qualquer\n\n");
		fflush(stdin); //fflush limpa para nao ter algum caracter na memoria de get
	        
		fgets(FRASE, 81, stdin);
                fputs(FRASE, PTRARQ);
		printf("\nDeseja continuar (S/N)? ");
		fflush(stdin);
		scanf("%c", &RESP);
	}

	fclose(PTRARQ);

	return 0;
}
