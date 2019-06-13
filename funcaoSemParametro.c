#include <stdio.h>
#include <stdlib.h>

/* função sem parametro
ou com void possuem a diferença
de reconhecimento do compilador.

na função sem parêmetro, o compilador
nao irá verificar se realmente a função é chamada
com argumentos, ou seja, o compilador nao irá ler
os valores contidos dentro do parenteses na sua chamada
e a função nao terá acesso a esses parâmetros.

A função com o parametro (void) dentro dos seus parenteses
deixa claro para o compilador que nao haverá parametros
para a função e acusará um erro caso o programador tentar
passar valores.
*/

// função sem VOID
void imprime()
{
	printf("Teste de funcao!\n");
}

int main()
{
	imprime();
	imprime(5);
	imprime(5,'a');

	return 0;
}