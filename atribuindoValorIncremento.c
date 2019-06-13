#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* a cláusula de incremento pode conter
	qualquer comando que altera o valor de uma das
	variáveis utilizadas pelo comando for.*/

	int a,b,c;
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);

	// incremento de duas unidades
	/* incrementa mais dois a variavel c
	usando atribuíção simplificada
	*/
	for (c = a; c <= b; c+= 2){
		printf("%d\n",c);
	}

	// novo valor é lido do teclado
	/* usando o comando scanf para  */
	for(c = a; c <= b; scanf("%d",&c)){
		printf("%d\n",c);
	}

	return 0;
}