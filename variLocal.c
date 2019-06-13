#include <stdio.h>
#include <stdlib.h>

/* variavel local so vale e so é visivel dentro
do bloco onde ela foi declarada, portanto não é possivel
altera-la e nem ser usada por todo o programa, somente
pelo bloco em que ela foi declarada.
*/
void func1()
{
	int x; // variável local, so vale aqui dentro
}

void func2()
{
	/* variável local de mesmo nome que a outra, porém,
	elas sao diferentes porque estão declaradas em blocos 
	diferentes, portanto são distintas.
	*/
	int x; // variavel local, so vale dentro desse bloco
}

int main()
{
	int x; /* variável local exclusiva da função main(),
	portanto distinta das variaveis x das funções func1() e func2()
	*/
	scanf("%d",&x);
	if (x == 5)
	{
		int y = 1; // escopo local, dentro de outro escopo local
		// a variável y so vale dentro do bloco IF
		printf("%d\n",y);
	}

	return 0;
}