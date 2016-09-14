#include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define T 50

int main(void)
{
	int vec[T],n, par, impar, mayor, menor, pos, neg;
	int x;
	
	do
	{
		printf("\n Numero de elementos del vector: ");
		scanf("%d",&n);
		
	}while(n<5 || n>T);
	
	
	srand(time(0));
	for(x=0;x<n;x++)
	{
		vec[x]=rand()%100+100;
	}
	
	par=0; impar=0; mayor=vec[0]; menor=vec[0]; pos=0; neg=0;
	
	for(x=0; x<n; x++)
	{
		if(vec[x]%2==0)
		{
			par++;
		}
		else
		{
			impar++;
		}
		
		if(vec[x]>0)
		{
			pos++;
		}
		else
		{
			neg++;
		}
		
		if(vec[x]>mayor)
		{
			mayor=vec[x];
		}
		if(vec[x]<menor)
		{
			menor=vec[x];
		}
		
	}
	
	for(x=0;x<n;x++)
	{
		printf("\n %d",vec[x]);
	}
	
	printf("\n\n Numeros pares: %d",par);
	printf("\n Numeros impares: %d",impar);
	printf("\n Numeros positivos: %d",pos);
	printf("\n Numeros negativos: %d",neg);
	printf("\n Numero Mayor: %d",mayor);
	printf("\n Numero Menor: %d",menor);
	
	return 0;
}
