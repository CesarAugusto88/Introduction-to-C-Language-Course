// ponteiro5.c - alocacao de vetores
// Cesar - 28/02/2025

#include <stdlib.h>

int main(void)
{
	int i;
	int *v;

	v = (int*)malloc(sizeof(int)*5); //alocacao para 5 ints
	
	v[0] = 10;
	v[1] = 11;
	v[2] = 12;
	v[3] = 13;
	v[4] = 14;

	for (i=0; i<5; i++)
		printf("v[%d]: %d\n", i, v[i]);

	printf("Endereco de 'v': %p", v);

	free(v);
	return 0;
}
