// ponteiro6.c - aritmetica de ponteiros

#include <stdlib.h>
#include <stdio.h>

int main(void)
{

	int *vet;

	int *ptr;

	vet = (int*)malloc(sizeof(int)*10);

	vet[4] = 44;

       	// 'vet' funciona como um vetor, depois de malloc

	ptr = vet;

       	// 'ptr' aponta para o início da

	// área alocada por 'vet

	*ptr = 11;

       	// vet[0] = 11

	// coloca 11 na primeira posição da área alocada

	ptr++;

       	// avança o apontador

	*ptr = 12;

       	// vet[1] = 12

	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	// free(ptr); // Liberar 'ptr' direto causa NULL POINTER ASSIGNMENT

	// Corrigindo, a forma correta é:

	ptr--;

	free(ptr);
}
