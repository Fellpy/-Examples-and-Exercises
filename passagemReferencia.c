#include <stdio.h>
#include <stdlib.h>

/* passagem porreferencia
se refere ao fato de que quando queremos
que toda modificação feita nos valores dos paramentros
dentro da função sejam repassados para quem chamou a função.

Em resumo se refere ao que um valor de um dado
seja modificado em tal função e que esse valor se reflita por todo o programa.

a função scanf() é um exemplo simples, por que quando queremos
ler dados do teclado, passamos o nome de uma variavel para
a função scanf() para que o valor seja armazenado na mesma.

O valor dessa variavel é modificado dentro da função scanf()
e seu valor pode ser acessado no programa principal.
*/

int main()
{
	int x = 5;
	printf("Antes do scanf: x = %d\n",x);
	printf("Digite um numero: ");
	scanf("%d",&x); 
	printf("Depois do scanf: x = %d\n",x);

	return 0;
}