#include <stdio.h>
#include <stdlib.h>

// função com void como parâmetro
void imprime(void)
{
	printf("Teste de funcao!\n");
}

int main()
{
	imprime();
	//imprime(5); // ERRO
	//imprime(5,'a'); // ERRO

	return 0;
}