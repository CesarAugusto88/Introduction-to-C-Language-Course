/* Programa Calculo do Salario  */

#include <stdio.h>

int main(void)
{
	float horas_trabalhadas, valor_hora, salario;
	
	scanf("%f", &horas_trabalhadas);
	scanf("%f", &valor_hora);

	salario = horas_trabalhadas * valor_hora;

	printf("%f\n", horas_trabalhadas);
	printf("%f\n", valor_hora);
	printf("%f\n", salario);

	return 0;
}
