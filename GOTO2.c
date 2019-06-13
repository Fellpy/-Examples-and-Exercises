#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*Apesar de banido da prática de programação, o comando
	goto pode ser útil em determinadas circunstâncias. Ex: sair
	de dentro de laços aninhados.
	*/

	int i,j,k;
	for(i = 0; i < 5;i++){
		for(j = 0;j < 5;j++){
			for(k = 0; k < 5;k++){
				if(i == 2 && j == 3 && k == 1)
					goto fim;
				else 
					printf("Posicao [%d%d%d]\n",i,j,k);
			}
		}
	}

	fim: // label de referencia para o comando goto,
	// onde está localizado na frente do programa, de 
	// acordo com as regras.
	printf("Fim do programa!\n");

	return 0;
}