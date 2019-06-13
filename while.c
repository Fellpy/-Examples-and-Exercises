#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	printf("Digite o valor de a: \n");
	scanf("%d",&a);
	printf("Digite o valor de b: \n");
	scanf("%d",&b);
	printf("\n");

	while(a < b){
		a += 1; // uso de atribuição simplificada += 
		printf("%d\n",a);
	}

	return 0;
}