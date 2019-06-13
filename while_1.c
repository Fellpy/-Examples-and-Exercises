#include <stdio.h>

/*
Programa em C que conta de 1 até 10 usando o laço while

Primeiro declaramos uma variável, e inicializamos ela com o valor inicial, que é 1.

Logo em seguida ,fazemos com que o while dê um printf, mostrando o valor dessa variável 
ENQUANTO ela for MENOR ou IGUAL a 10.

Após imprimir o número 10, a variável é incrementada e passa a ter valor 11.
Como 11 não é menor ou igual a 10, o laço recebe valor lógico FALSE e termina sua execução.
*/

int main(void)
{
	int numero = 1;

	while(numero <= 10)
	{
		printf("%d\n",numero);
		numero++;
	}

	return 0;
}