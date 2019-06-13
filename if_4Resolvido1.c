#include <stdio.h>

// idade minima
#define idadeMinina 18

// idade maxima
#define idadeMaxima 67

/* Exercicios C Progressivo Resolvidos

Versão 2 
4. Para doar sangue é necessário ter entre 18 e 67 anos. 
Faça um aplicativo na linguagem C que pergunte a idade de uma pessoa e 
diga se ela pode doar sangue ou não. Use alguns dos operadores lógicos OU (||) e E (&&).
*/

int main(void)
{

	int idade;

	printf("Digite sua idade: ");
	scanf("%d",&idade);

	// testa a condição
	if ( (idade < idadeMinina || (idade > idadeMaxima)))
	{
		printf("Voce nao pode doar sangue!\n");
	}
	else 
	{
		printf("voce pode doar sangue!\n");
	}

	return 0;
}