#include <stdio.h>
#include <stdlib.h>

// a função malloc(unsigned int num) serve para alocar(reservar)
// um espaço de memória durante a execução do programa
// ela retorna um ponteiro do tipo genérico(void) com o endereço
// do inicio do espaço de memória alocado.

// Ao retorno do ponteiro do tipo void, é pelo motivo da função
// não saber o que será feito com a memória alocada.

// O ponteiro retornado pela função malloc() pode ser atribuído
// a qualquer ponteiro se for convertido para o tipo que se deseja
// usar pelo uso da técnica do type cast.

void testeAlloc();

int main(void)
{

	/*int *p;
	p = malloc(5 * sizeof(int));	

	for (int i = 0; i < 5; ++i)
	{
		printf("Digite o valor da posição %d\n", i);
		scanf("%d", &p[i]);
	}*/

	// estamos alocando um array contendo 5 posições de inteiros: 5 * sizeof(int);
	
	// a função sizeof(int) retorna 4 (número de bytes do tipo int na memória).
	// Portanto, são alocados 20 bytes (50 * 4 bytes);
	
	// a função malloc() retornar um ponteiro genérico, o qual é convertido
	// para o tipo do ponteiro via type cast: (int*);

	//o ponteiro p passa a ser tratado como um array: p[i].

	testeAlloc();
	return 0;
}

void testeAlloc()
{
	/***
	Função com o propósito entender como os endereços são
	atribuídos no momento da alocaçao.
	***/

	// o ponteiro genérico oi nao aponta para lugar nenhum na memória
	// portanto ele é NULL
	int *oi; // NULL
	printf("Endereço original do ponteiro 'oi': %p\n", oi); 


	// o endereço do ponteiro genérico oi é substituído pelo ponteiro
	// genérico que é retornado pela função malloc()
	// o ponteiro 'oi' passa a ter o endereço do espaço de memória 
	// reservado por malloc, deixando assim de ser NULL
	oi = (int *) malloc(5 * sizeof(int));	
	
	oi[0] = 22;
	oi[2] = 15; // atribui um valor para o primeiro elemento do ponteiro oi


	// Endereço do primeiro elemento do ponteiro oi
	printf("Endereço do ponteiro 'oi' substituído ");
	printf("pelo ponteiro retornado por malloc: %p\n", oi);

	printf("Conteudo do primeiro elemento reservado para oi: %d\n", *oi);
	printf("Endereço do terceiro elemento reservado para oi: %p\n", (oi + 2));

	void *g; // NULL
	
	g = &oi[2];
	printf("Endereço do terceiro elemento do ponteiro io: %p\n", g);

}