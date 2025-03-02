// imc.c - calcula indice de massa corporea
#include <stdio.h>
#include <math.h>
int main(void)
{
	float p, a, i;
	
	printf("Peso? ");
	scanf("%f", &p);
	
	printf("Altura? ");
	scanf("%f", &a);
	
	i = p / pow(a, 2);
	printf("IMd = %.2f\n", i);
	
	if( i > 30.0) printf("Obeso\n");
	else printf("Normal\n");
	
	return 0;
}
