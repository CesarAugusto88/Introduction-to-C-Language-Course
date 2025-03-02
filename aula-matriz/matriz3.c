// Books: https://numerical.recipes/
// matriz3.c - uma matriz de duas dimensoes

#include <stdio.h>

int main(void)
{

	//Inicializando linha da  matriz sem tamanho definido
	int matriz[][2] = {23, 45, 54, 55, 77, 65};
	int i, j;

	// imprimindo os valores da matriz
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=1; j++)
			printf("\nmatriz[%d][%d] = %d\n", i,j , matriz[i][j]);
	}
	
	return 0;
}
