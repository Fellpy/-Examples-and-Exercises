#include <stdio.h>
#include <stdlib.h>

/* o corpo de uma função é a sua alma.
é no corpo de uma função que sao executados
as suas declarações e comandos.

uma função pode ser especifica e fora da função
main() ou pode-se construir a função dentro 
da main()
*/

// constroi uma função que calcula o fatorial de um numero especifico dentro da função main
// calculo do fatorial dentro da função main
int main()
{
	printf("Digite um numero inteiro positivo: ");
	int x;
	scanf("%d",&x);
	int i, f = 1;
	for(i = 1; i <= x; i++)
	{
		f = f * 1;
	}

	printf("O fatorial de %d eh: %d\n",x,f);

	return 0;
}