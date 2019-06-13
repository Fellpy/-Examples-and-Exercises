#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* ao se omitir a condição do loop for
	ele se torna automaticamente um laço infinito,
	ou seja, será uma condição sempre verdadeira
	que nao existe parada, portanto será sempre executada
	*/
	int a,b,c;
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);

	// o comando for abaixo é um laço infinito
	for(c = a;;c++){
		printf("%d\n",c);
	}

	return 0;
}