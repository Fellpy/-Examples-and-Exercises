#include <stdio.h>
#include <string.h>

// compara duas strings, caractere a caractere, exceto por comparar
//até uma certa quantidade de caracteres

int main(void)
{
	char senha[] = "xp1247";
	char s1[80];
	int tam;

	printf("Entre com a senha para ver a mensagem: ");
	gets(s1);

	tam = strlen(senha);

	// compara até o tamanho da senha
	if (strncmp(s1, senha, tam) == 0)
	{
		printf("Acertou a senha..\n");
	}
	else 
	{
		printf("Tente novamente..\n");
	}
}