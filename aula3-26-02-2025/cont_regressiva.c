// cont_regressiva.c - contagem regressiva de n ate 0
// Cesar - 26/02/2025

#include <stdio.h>

void contagemRegressiva(int n)
{
	int i;

	for(i=n; i >= 0; i--) //i-- (i=i-1)
	{
		printf("%d\n", i);
	}

}

int main(void)
{
	int n;

	printf("Numero para contagem regressiva: ");
	scanf("%d", &n);

	contagemRegressiva(n);

	return 0;
}
