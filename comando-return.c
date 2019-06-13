#include <stdio.h>


// declaração dos protótipos das funções
int le_numero(void);
int soma(int , int);

void main(void)
{
	int vlr_a;
	int vlr_b;

	vlr_a = le_numero();
	vlr_b = le_numero();
	printf("Soma: %d\n", soma(vlr_a, vlr_b) );
}

int le_numero(void)
{
	char ch;
	int valor;

	printf("Entre com um numero: ");
	ch = getchar();
	while(ch < '0' || ch > '9')
	{
		ch = getchar();
	}

	valor = 0;
	while(ch >= '0' && ch <= '9')
	{
		valor *= 10;
		valor += (int) ch - (int) '0';
		ch = getchar();
	}

	while(ch != '\n')
	{
		ch = getchar();
	}
	return valor;
}

int soma(int a, int b)
{
	return a + b;
}