#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b);
int resta(int a, int b);
void mensaje();
void suma2();

int main(void)
{
	int x, y, s, r;
	
	s=suma(50,20);
	
	printf("\n Ingrese valor de x: ");
	scanf("%d",&x);
	printf("\n Ingrerse valor de y: ");
	scanf("%d",&y);
	
	r=resta(x,y);
	
	mensaje();
	
	suma2();
	
	printf("\n El valor de la suma de 50 y 20 es: %d",s);
	printf("\n El valor de la resta es: %d",r);
	
	return 0;
}

int suma(int a, int b)
{
	int c; //b Variable LOCAL
	
	c=a+b;
	
	return c;
}

int resta(int a, int b)
{
	return(a-b);
}

void mensaje()
{
	printf("\n Hasta luego");
}

void suma2()
{
	int a, b, c;
	
	printf("\n Ingrese el valor de a: ");
	scanf("%d",&a);
	printf("\n Ingrese el valor de b: ");
	scanf("%d",&b);
	
	c=a+b;
	
	printf("\n La suma2 es igual a %d ",c);
}



