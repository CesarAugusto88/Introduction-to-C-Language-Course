// ponteiro1.c
// Cesar - 28/02/206 - Curso de Linguagem C
// PHD Student INPE Aplied Computing

#include <stdio.h>

int main(void)
{
	int a, b, c;

	int *ptr; // declara um ponteiro (guarda o endereco da variavel)
        
	a = 90;
	b = 2;
	c = 3;

	ptr = &a;

	printf("Valor de ptr: %p, Conteudo de ptr: %d\n", ptr, *ptr); //*conteudo do ponteiro
	printf("B: %d, C: %d", b, c);

	return 0;
}
