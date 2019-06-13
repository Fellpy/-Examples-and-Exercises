#include <stdio.h>

/*
Crie um aplicativo em C que pergunte a 
idade do usuário e diga se ele tem que fazer ou 
não o exame de próstata, usando o operador maior igual a. 
Lembrando que é recomendável fazer o exame a partir dos 45 anos.
*/

int main(void)
{
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);

	if(idade >= 45)
	{
		printf("Eh amigo, ja era, tem que fazer o exame da prostata...\n");
	}
	else {
		printf("Voce nao precisa fazer o exame de prostata... ainda\n");
	}

	return 0;
}