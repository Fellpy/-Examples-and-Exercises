#include <stdio.h>
#include <stdlib.h>

/* uma função é um bloco de código 
que contém uma sequencia de comandos ou declarações
que executam uma determinada tarefa atraves do uso
do seu nome.

Funções podem ser invocadas em qualquer
parte do programa.

as vantagens são reutilização de código
e estruturação do programa.

Funções devem ser declaradas antes da função main(),
mas podem ser declaradas dentro de uma main(), caso
tenha seu prototipo declarado antes da main().
*/

// declarando uma função
int Square (int a)
{
	return (a * a);
}

int main()
{
	int n1, n2;
	printf("Entre com um numero: \n");
	scanf("%d",&n1);

	n2 = Square(n1); // invocando a função e guardando o seu valor retornado na vari n2
	
	printf("O seu quadrado vale: %d\n",n2);

	return 0;
}
