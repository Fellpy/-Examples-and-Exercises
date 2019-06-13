#include <stdio.h>

/*
Crie um aplicativo em C que pergunte a 
idade do usuário e diga se ele tem que fazer ou 
não o exame de próstata, usando o operador menor igual a. 
Lembrando que é recomendável fazer o exame a partir dos 45 anos.
*/

int main()
{
	int idade;

	printf("Digite sua idade: ");
	scanf("%d",&idade);

	if(idade <= 44){
		printf("Voce nao precisa fazer o exame de prostata... ainda\n");
	}
	else {
		printf("Eh amigo, ja era, tem que fazer o exame de prostata...\n");
	}

	return 0;
}