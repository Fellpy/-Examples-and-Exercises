#include <stdio.h>

/* A duas mais funções para se ler caracteres
do usuário, porém, elas sao mais gerais, ou seja,
podem ler outras fontes alem do teclado.

fgetc() e getc()

Para usar essas funções precisamos
especificar por onde serão lidas as informações.
*/

int main()
{
	char letra1, letra2;

	printf("Insira um caractere:\n");
	
	// stdin especifica a função que sera lida a informação pelo teclado
	letra1 = getc(stdin); // getc incluí a leitura do "\n", entope o buffer.

	//setbuf(stdin,NULL); // limpando buffer

	printf("Insira outro caractere:\n");
	letra2 = fgetc(stdin); // stdin entrada padão(teclado). entope o buffer.

	printf("Voce digitou: %c e %c\n",letra1, letra2);

	return 0;
}