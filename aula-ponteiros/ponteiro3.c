// ponteiro3.c - acessando o conteudo de uma pos. de memoria usando um ponteiro
#include <stdio.h>

int main(void)
{
	int x;
	int *ptr;
	x = 5;
	ptr = &x; // igual scanf 
	
	printf("\nO valor da variavel x e: %d\n", *ptr); //desreferenciando um ponteiro
	*ptr = 10; // usando desreferencia no "lado esquerdo" de uma atribuicao
	printf("\n X = %d ", x);
	printf("\n X (ptr) = %d ", *ptr);
	return 0;
}
