#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p;
	p = (int *) malloc(5 * sizeof(int));
	
	// se não houver memória suficiente para alocar
	// a memória requisitada, a função retorna um ponteiro NULL
	if (p == NULL)
	{
		printf("Erro: Memória insuficiente!\n");
		exit(1);
	}

	for (int i = 0; i < 5; ++i)
	{
		printf("Digite o valor da posição %d\n", i);
		scanf("%d", &p[i]);
	}

	return 0;
}