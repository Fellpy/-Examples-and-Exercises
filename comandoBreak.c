#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("Digite o valor de a: ");
	scanf("%d",&a);
	printf("Digite o valor de b: ");
	scanf("%d",&b);

	// chama o break quando o valor de a é igual a b
	// e o programa é interrompido
	while (a <= b){
		if (a == b){
			printf("interrompido, porque a variavel a atingiu o valor da variavel b\n");
			break;
		}
		a += 1;
		printf("%d\n",a);
	}

	return 0;
}