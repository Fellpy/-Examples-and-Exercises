#include <stdio.h>
#include <stdlib.h>

/* passagem de array como parametro
é uma forma de passar arrays em forma de parametro
para uma função.

formas de declarar um array como parametro:

void imprime(int *m, int n);
void imprime(int m[],int n);
void imprime(int m[5], int n)

primeir se declara o array e depois uma variavel (geralmente do tipo inteira)
para representar o tamanho do array

as tres declarações mesmo diferentes estão corretas,
pois, não existe checagem do limite do array no momento da
compilação.

todo array é passado como referencia para uma função,
pois, o que é de fato passado para a função é o endereço
do primeiro elemento do array.
*/

// declarando um array como parametro da função -> *n
/* a variavel *n significa que iraw receber um endereço de memoria,
que no caso é o endereço do primeiro elemento do array.

a variavel "m" indica que será o tamanho do array passado, quando
a função for chamada.
*/
void imprime(int *n, int m)
{
	int i;
	for(i = 0; i < m; i++)
	{
		printf("%d\n",n[i]);
	}
}

int main()
{
	int v[5] = {1,2,3,4,5};

	// passando somente o nome estamos passando o array inteiro
	// se estivesse com colchetes, estaria passando o valor de uma
	// posição do array e não o seu endereço, resultando em erro.
	/* O programa ja sabe que será enviado um array, pois isso ja 
	foi definido no protótipo da função imprime(). */
	imprime(v,5);

	return 0;
}
