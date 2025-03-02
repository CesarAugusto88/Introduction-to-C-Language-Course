// estrutura1.c
#include <stdio.h>

typedef struct // cria uma struct para armazenar os dados de uma pessoa
{
	float Peso;
	int Idade;
	float Altura;
} Pessoa; // define o nome do novo tipo criado

void ImprimePessoa(Pessoa P)  // declara o parametro como uma struct
{
	printf("Idade: %d Peso: %f Altura: %f\n", P.Idade, P.Peso, P.Altura);
}

int main(void)
{
	Pessoa Joao, P2;
	Pessoa Povo[10];
	Joao.Idade = 15;
	Joao.Peso = 60.5;
	Joao.Altura = 1.75;
	Povo[4].Idade = 23;
	Povo[4].Peso = 75.3;
	Povo[4].Altura = 1.89;
	P2 = Povo[4];
	P2.Idade++;  // incrementa 1 (soma 1)
	ImprimePessoa(Joao);
	ImprimePessoa(Povo[4]);
	ImprimePessoa(P2);
	return 0;
}
