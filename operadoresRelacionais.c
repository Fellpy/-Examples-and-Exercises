#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* operadores relacionais servem para
	testar condições: se sao verdadeiras ou falsas
	e para verificar se um valor é maior/menor/igual/diferente/
	menor igual/maior igual etc. 
	Caso a condição seja verdadeira ela retorna 1 senao retorna 0
	*/
	int x = 5;
	int y = 3;

	printf("Resultado: %d\n",x > 4); // verdadeiro (1)
	printf("Resultado: %d\n",x == 4); // falso (0)
	printf("Resultado: %d\n",x != 4); // verdadeiro (1)
	printf("Resultado: %d\n", x != y + 2); // falso

	return 0;
}