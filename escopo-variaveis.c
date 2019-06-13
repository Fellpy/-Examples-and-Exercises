#include <stdio.h>

// prototipo das funções
int soma(int, int);
int diferenca(int , int);
void le_valores(void);

// variaveis publicas(globais), disponíveis para uso em todo programa
int vlr_a;
int vlr_b;

void main(void)
{

	// variavel local, somente disponivel na main
	int resultado;

	le_valores();
	printf("Soma: %d\n", soma(vlr_a, vlr_b) ); // variaveis publicas
	printf("Diferenca: %d\n", diferenca(vlr_a, vlr_b)); // variaveis publicas
}

void le_valores(void)
{
	printf("Entre com os valores: ");
	scanf("%d %d", &vlr_a, &vlr_b); // variaveis globais
}

int soma(int a, int b)
{
	// variavel local somente disponível em soma
	// não é a mesma variavel declarada na main
	int resultado; 

	resultado = a + b;
	return resultado;
}

int diferenca(int a, int b) // parâmetros sao sempre locais
{
	int resultado;
	resultado = a - b;
	return resultado;
}