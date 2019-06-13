#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	// limpando buffer
	setbuf(stdin,NULL);
	
	// acessando um elemento da String
	char str[6] = "teste"; // inicializando a string
	printf("%s\n",str);

	str[0] = 'L'; // atribuindo um novo caracter para "Teste"
	printf("%s\n",str);

	str[0] = 'p';
	printf("%s\n",str);

	char str1[20] = "Felipe vieira pontes";
	char str2[20];

	int i;
	// copiando os elementos do array str1 para o str2
	for (i = 0; str1[i] != '\0'; ++i)
	{
		str2[i] = str1[i]; // str2 recebe os elementos[i] do str1
	}

	str2[i] = '\0'; // atribuindo o elemento '\0' que indica final da string

	
	char string[30] = "Paralelepipedo australiano";
	char string2[30];
	
	for (int j = 0; str[j]; ++j)
	{
		// copiando os elementos da string para a string2
		string2[j] = string[j]; // string2 reebe os elementos[j] da string
	}
	

	// imprimindo a string
	printf("%s\n",string);

	return 0;
}