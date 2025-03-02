#include <stdio.h>

int main(void)
{
	int A, B, X;
	printf("Entre com o valor da variavel A: "); scanf("%d", &A);
	printf("Entre com o valor da variavel B: "); scanf("%d", &B);
	X = A + B;
	if (X > 10)
		printf("\nX = %d", X);
	return 0;
}
