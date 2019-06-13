#include <stdio.h>
#include <stdlib.h>

/* pode-se também declarar uma função
depois da clausula main(), se o seu
prototipo for declarado antes da
main().
*/

// prototipo da função
int square(int a); // não é nescessario passar a variavel parametro na declaração do prototipo

int main()
{
	int n1, n2;
	printf("Entre com um numero: ");
	scanf("%d",&n1);
	n2 = square(n1);
	printf("O seu quadrado vale: %d\n",n2);

	return 0;
}

int square(int a)
{
	return (a * a);
}