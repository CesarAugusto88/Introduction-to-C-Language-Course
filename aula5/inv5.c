// inv5.c - exibe sequencia de 5 numeros em ordem inversa
/* 
 mesmo que tenha o valor 5 na declaração (int v[5]), isso é o tamanho do vetor, mas para acessar os indices do tamanho 5 seria v[4], se v[5] daria erro. como o prof. explicou começa no 0..
 */
#include <stdio.h>

int main(void)
{
	int v[5], i;
	for(i=0; i<5; i++)
	{
		printf("%do. numero? ", i+1);
		scanf("%d", &v[i]);
	}
	printf("\nOrdem inversa: ");
	
	for(i=4; i>=0; i--)
		printf("%d, ", v[i]);
	
	return 0;
}
