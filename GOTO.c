#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* o comando GOTO da um salto condicional
	dentro do programa atráves de uma especificação
	chamada label. Ela pula de um parte do programa 
	para outra atráves de um destino especificado em 
	alguma parte do programa. Esse destino pode ser
	atrás ou na frente do programa, desde que esteja 
	na mesma função.

	Segundo as regras gerais da programação estruturada,
	o uso do comando GOTO não é nescessario, pois com as 
	tres construções da programação(comando sequencias
	,condicionais e de repetição) ja é possível realizar
	qualquer operação para a criação de programas.
	*/

	int i = 0;
	// Definindo o destino/label em que o GOTO irá pular
	// nesse caso ele irá voltar a esse destino de nome "inicio"
	inicio:
	if (i < 5){
		printf("Numero %d\n",i);
		i++;
		goto inicio; // indicamos que goto deve pular para inicio
	}

	return 0;
}