#include <unistd.h>


int main(void)
{
	// programa que executa uma chamada de sistema
	// usa a biblioteca do sistema para imprimir a string hello world
	write(1,"hello, world!\n", 14);
	return 0;
}