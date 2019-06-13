#include <stdio.h>
#include <stdlib.h>

/* No momento da declaração
de uma função que use passagem
por referencia, os parametros
da mesma precisam ter antes
do nome da variavel o operador
de ponteiro " * ", para que seja
possivel a variavel ser modificada
dentro da função e se refletir fora 
da mesma.

Para o uso do parametro de referencia
dentro da função também é nescessario
usar o operador " * ".

Na chamada da função entre os seus
parenteses é nescessario usar o operador
de " & " para que a função pegue o endereço
de memória e NÂO uma cópia do dado passado
na chamada da função. Podendo assim, modificar
o seu real valor.
*/

void soma_mais_um(int *n) // operador " * " para possibilitar a passagem por referencia
{
	// uso obrigatorio do operador " * " dentro da função
	// para realmente modificar o valor da variavel de referencia
	*n = *n + 1;
	printf("Dentro da funcao: x = %d\n",*n);
}

int main()
{
	int x = 5;
	printf("Antes da funcao: x = %d\n",x);
	
	// uso obrigatorio do operador " & ", para a leitura do endereço de memória da vari
	soma_mais_um(&x); 

	/* Resultado do valor de x modificado dentro da função soma_mais_um */
	printf("Depois da funcao: x = %d\n",x);

	return 0;

}