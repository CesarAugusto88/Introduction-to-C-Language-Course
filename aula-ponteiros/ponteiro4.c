// ponteiro4.c - alocacao dinamica de memoria
// Cesar 28/02/2025

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int *ptr_a;
	ptr_a = malloc(sizeof(int));  //cria a area necessaria para um inteiro
	printf("\nTamanho da variavel necessaria: %d", sizeof(int));
	if(ptr_a == NULL)
	{
		printf("Memoria insuficiente!\n");
		exit(1);
	}

	printf("\nEndereco de ptr_a: %p\n", ptr_a);
	*ptr_a = 90;
	printf("\nConteudo de ptr_a: %d\n", *ptr_a); //imprime 90
	free(ptr_a);				     //libera a area alocada
}

