//data.c - valida data e exibe a data do dia segunte
#include <stdio.h>
// prototipos das funcoes
int valida(int d, int m, int a);
int ultimoDia(int m, int a);
int bissexto(int a);
void exibeDiaSeguinte(int d, int m, int a);

int main(void)
{
	int d, m, a;
	printf("Data? ");
	scanf("%d/%d/%d", &d, &m, &a);
	if(valida(d, m, a) )
	exibeDiaSeguinte(d, m, a);
	else
	puts("Data invalida! ");
	return 0;
}

int valida(int d, int m, int a)
{
	if (a<0) return 0;
	if (m<1 || m>12) return 0;
	if (d<1 || d > ultimoDia(m, a)) return 0;
	return 1;
}

int ultimoDia(int m, int a)
{
	if (m==2) return 28+bissexto(a);
	if ( m==4 || m==6 || m==9 ||m==11) return 30;

	return 31;
}

int bissexto(int a)
{
	return (a%4==0 && a%100 != 0) || (a%400 == 0);
}

void exibeDiaSeguinte(int d, int m, int a)
{
	if (d<ultimoDia(m, a)) d++;
	else
	{
		d=1;
		m++;
		if(m==13){
			m=1;
			a++;
		}
        }
	printf("\nData do dia seguinte: %02d/%02d/%d\n", d, m, a);
}
