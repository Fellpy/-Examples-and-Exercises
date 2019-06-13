#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* o comando continue diferentemente
	do comando break, passa para a proxima
	repetição do laço, se alguma condição/situação
	for ou nao atendida.
	*/
	int opcao = 0;
	while(opcao != 5){
		printf("Escolha uma opcao entre 1 e 5: ");
		scanf("%d",&opcao);
		if ((opcao > 5) || (opcao < 1))
			continue;
		printf("Opcao escolhida: %d\n",opcao);
	}

	return 0;
}