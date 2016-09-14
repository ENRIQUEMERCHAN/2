#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i, tam, voc, esp, letra, num, c;
	int porc, porcl, porcn;
	char cad[300], r, digi, cad2[300];
	
	printf("\n Ingrese texto: ");
	fflush(stdin);
	gets(cad);
	
	tam=strlen(cad);
	
	strcpy(cad2,cad);
	
	voc=0; esp=0; letra=0; num=0; c=0;
	porc=0; porcl=0; porcn=0;
	
	for(i=0; i<tam; i++)
	{
		if(cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u')
		{
			voc++;
		}
		if(cad[i]==' ')
		{
			esp++;
			cad[i]='_';
		}
		if(isalpha(cad[i]))
		{
			letra ++;
		}
		if(isdigit(cad[i]))
		{
			num++;
			digi=cad[i];
		}
		
	}

	porc=(voc*100)/tam;
	porcl=(letra*100)/tam;
	porcn=(num*100)/tam;
	
	printf("\n\n la cadena es: %s",cad);
	printf("\n el tamano es: %d",tam);
	
	printf("\n la cantidad de vocales: %d",voc);
	printf("\n el porcentaje de vocales es: %d",porc);
	printf("\n la cantidad de palabras es: %d",esp+1);
	printf("\n la cantidad de letras es: %d",letra);
	printf("\n el porcentaje de letras es: %d",porcl);
	printf("\n la cantidad de digitos es: %d",num);
	printf("\n el porcentaje de digitos es: %d",porcn);
	printf("\n al reves: %s",strrev(cad));
	printf("\n el digito es: %c",digi);
	
	printf("\n\n la cadena 2 es: %s",cad2);
	
	c=strcmp(cad,cad2);
	
	printf("\n\n la cadena %s es ",cad);
	
	if(c>0)
	{
		printf("mayor que la cadena: %s ",cad2);
	}
	else
	if(c<0)
	{
		printf("menor que la cadena: %s ",cad2);
	}
	else
	{
		printf("\n las cadenas son iguales ");
	}
	
	strcat(cad2,cad);
	
	printf("\n\n la concatenacion es: %s",cad2);
	
	
	
	return 0;
}
