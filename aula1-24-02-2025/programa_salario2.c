/*Programa salario melhorado */

#include <stdio.h>

int main(void)
{
	float horas_trab, valor_hora, salario;
	printf("Quantas horas de trabalho?: ");
	scanf("%f", &horas_trab);
	printf("Qual o valor da hora?: ");
	scanf("%f", &valor_hora);
	salario = horas_trab * valor_hora;
	printf("Salario..... %f \n", salario);
	return 0;
}
