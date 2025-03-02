// graf.c - exibe grafico para variacao de temperatura
#include <stdio.h>

void preencher(float t[7])
{
	int i;

	for(i=0; i<7; i++)
	{
		printf("%da. temperatura? ", i+1);
		scanf("%f", &t[i]);
	}
}

float media(float t[7])
{
	int i;
	float s=0;

	for(i=0; i<7; i++) s += t[i];
	return s/7;
}

void barra(float t)
{
	int i;

	for(i=1; i<=t; i++)
		printf("*");
}

void grafico(float t[7], float m)
{
	char d[7] = {'D', 'S', 'T', 'Q', 'Q', 'S', 'S'};
	int i;

	printf("Grafico de variacao da temperatura:\n");
	for(i=0; i<7; i++)
	{
		printf("\n%c: ", d[i]);
		barra(t[i]);
	}
	puts("\n");	
}

int main(void)
{
	float t[7], m;

	preencher(t);
	m = media(t);
	grafico(t,m);
	
	return 0;
}
