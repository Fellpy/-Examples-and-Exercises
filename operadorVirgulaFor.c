#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* o operador virgula(,) é usado
	para separar comandos, permitindo
	determinar uma lista de expressões
	que serão executadas sequencialmente
	
	No comando FOR ela pode ser usada
	em qualquer cláusula
	*/
	int i,j;

	/* o operador de vírgula será usado
	para separar a atribuíção das variáveis
	na cláusula de inicialização e na de incremento
	*/
	for (i = 0, j = 100; i < j; j ++ ,i--){
		printf("i = %d e j = %d\n",i,j);
	}

	return 0;
}