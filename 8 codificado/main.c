#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
	int i, digito;
	char cad[300];
	
	printf("\n ingrese cadena: ");
	fflush(stdin);
	gets(cad);
	
	for(i=0; i<strlen(cad); i++)
	{
		printf("\n el caracter es: %c y su valor numero es: %i ",cad[i],cad[i]);
	}
	
	printf("\n\n\t");
	system("PAUSE");
	return 0;
}
