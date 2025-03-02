// programa ordena dois números
// Cesar - 25-02-2025

#include <stdio.h>
int main(void)
{
	int A, B, X;
	printf("Entre com o valor de A: "); scanf("%d", &A);
	printf("Entre com o valor de B: "); scanf("%d", &B);

	if (A > B)
	{
		X = A;
		A = B;
		B = X;
	
	}
	printf("\n os valores ordenados sao: %d e %d", A, B);

	return 0;
}
