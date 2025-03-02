// ponteiro2.c - imprime o valor armazernado no ponteiro (endereco)
// Cesar 28/02/2025

#include <stdio.h>

int main(void)
{
	int x;
	int *ptr;
	ptr = &x;

	printf("O endereco de X e: %p\n", ptr);

	return 0;
}
