#include <stdio.h>
#include <stdlib.h>

/* o comando typedef cria um
sinônino para algum tipo básico
ja existente(int,short, char..) ou um tipo definido pelo
programador(uma struct,union,enum...)

esse sinônimo assim que definido passa
a representar o tipo escolhido, pois,
eles se tornam equivalentes
*/

// declarando um sinonimo(inteiro) para o tipo básico int
/* o comando typedef apenas diz ao compilador para reconhecer
"inteiro" como um outro nome para o tipo int
*/
typedef int inteiro;

int main()
{
	int x = 10;
	// sinonimo representando o tipo int
	inteiro y = 20;
	y = y + x;
	printf("Soma = %d\n",y);

	return 0;
}