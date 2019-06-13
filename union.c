#include <stdio.h>
#include <stdlib.h>

/* unioes são semelhantes a estrutura
porque é um tipo de dado criado pelo programador
para conter variaveis(campos) que são armazenados 
na memória. 

A diferença entre uma estrutura e uma uniao está
no espaço de memoria alocado pela uniao.

Numa uniao todos os seus elementos são armazenados
no mesmo local de memoria e priorizado o maior elemento
contido na mesma, ou seja, o maior elemento que define
o tamanho da uniao e seu tamanho é compartilhado com
os demais elementos da uniao.

Se o valor de um dos elementos contidos na uniao for
modificado, afetará o valor de todos os demais.

Isso ocorre porque o espaço de memoria de uma uniao
para os seus elementos é compartilhado entre eles.

Todos os elementos estao no mesmo local de memoria,
compartilhando espaço, porém, o elemento de maior
tamanho(em bytes) que definirá o tamanho total da uniao.
*/

// declarando uma uniao
union tipo
{
	// declarando as variaveis
	short int x; // 2 bytes
	unsigned char c; // 1 byte
};

int main()
{
	// declarando uma variavel do tipo union t
	union tipo t;
	t.x = 1545;
	printf("x = %d\n",t.x);
	printf("c = %d\n",t.c);
	
	t.c = 69;
	printf("x = %d\n",t.x);
	printf("c = %d\n",t.c);

	return 0;
}
