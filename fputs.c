#include <stdio.h>
#include <stdlib.h>

int main()
{

	char string[] = {"Eai gay... ta tao serio porque?"};
	char string1[] = {" UHUHUHHAHAHAHAHAHAHHAHHAHAHHHHA"};

	setbuf(stdin,NULL); // limpando buffer

	fputs(string,stdout);
	fputs(string1,stdout);

	printf("\n");

	return 0;
}