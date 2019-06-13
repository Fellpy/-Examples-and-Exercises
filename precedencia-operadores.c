#include <stdio.h>

void main(void)
{
	 int w, k;
	 int resultado;

	 printf("Resultado da expressão 1: %d\n", 9 * (w = 90) );
	 printf("Variavel w: %d\n", w);
	 printf("Resultado da expressão 2: %d\n", resultado = (20 * (k = 50)) );

	 /*
	 Atribui 50 à variável k.
	 Realiza a multiplicação (20*50=1000).
	 Atribui 1000 à variável resultado.
	 Imprime o conteúdo da variável resultado (1000).
	 */

	 printf("Variavel k: %d\n", k);
	 printf("Variavel resultado: %d\n", resultado);
}