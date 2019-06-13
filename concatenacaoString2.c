#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	// concatenação de Strings

	char sublime[15] = "sublime";
	char text[15] = " text";

	char gerenciador[15] = "gerenciador ";
	char deTarefas[15] = "de tarefas";

	char linguagem[15] = "linguagem ";
	char c[15] = "C";

	char comparando[15] = "Comparando ";
	char strings[15] = "Strings!";

	char dia[10] = "dia!";
	char bom[10] = "bom ";

	strcat(bom,dia);
	printf("%s\n",bom);

	// concatenando sublme text
	strcat(sublime,text);
	// exibindo sublime text
	printf("%s\n",sublime);

	// concatenando gerenciador de tarefas
	strcat(gerenciador,deTarefas);
	// exibindo gerenciador de tarefas
	printf("%s\n",gerenciador);

	// concatenando linguagem C
	strcat(linguagem,c);
	// exibindo linguagem C
	printf("%s\n",linguagem);
	
	// concatenando comparando strings
	strcat(comparando,strings);
	printf("%s\n",comparando);

	return 0;
}