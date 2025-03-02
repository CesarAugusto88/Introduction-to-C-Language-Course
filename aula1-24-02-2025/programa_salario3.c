// programa_salario3.c
#include <stdio.h>
int main(void)
{
float horas_trab, valor_hora, salario;
printf("Quantas horas de trabalho?: ");
scanf("%f", &horas_trab);
printf("Qual o valor da hora?: ");
scanf("%f", &valor_hora);
salario = horas_trab * valor_hora;
printf("Horas de trabalho.....: %7.2f \n", horas_trab);
printf("Valor da hora.........: %7.2f \n", valor_hora);
printf("Salario...............: %7.2f \n", salario);
return 0;
}
