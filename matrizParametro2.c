#include <stdio.h>
#include <stdlib.h>

/* um array de mais de uma dimensão
pode ser passado para uma função como se 
fosse um array de uma única dimensão.

Passamos o endereço do primeiro elemento (&mat[0][0]). Isso faz com que
percamos a notação de dois colchetes para a matriz, e ela seja tratada
como se tivesse apenas uma dimensão.

*/

void imprime_matriz(int *m, int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d\n",m[i]);
}

int main()
{
	int mat[3][2] = {{1,2},{3,4},{5,6}};
	imprime_matriz(&mat[0][0],6);

	return 0;
}