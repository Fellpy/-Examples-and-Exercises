#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* dependendo da situação, pode -se omitir
	as clausulas do loop for.
	aqui omitimos a clausula de inicialização,
	porque a variavel a teve seu valor inicializado
	pela leitura do teclado(scanf)
	*/
	int a,b,c;
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);

	for(;a<= b;a++){
		printf("%d\n",a);
	}

	return 0;
}