#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cargar(int vec[30], int x);
void matriz(int mat[15][15], int x);
void imprimir(int V1[30], int V2[30], int V3[30]);
void imprimirma(int mat1[15][15], int mat2[15][15]);
void reves(int V1[30]);
void intercalar(int V2[30], int V3[30], int VR[60]);
void ordenara(int V1[30]);
void cargarvectore(int V2[30], int V3[30], int V5[30]);
void cargandof(int Vec[30], int V6[30]);

int main(void)
{
	int A[30], B[30], C[30], D[60], E[30], F[30];
	int M1[15][15], M2[15][15];
	
	srand(time(0));
	
	cargar(A,1);
	cargar(B,2);
	cargar(C,3);
	
	matriz(M1,1);
	matriz(M2,2);
	
	imprimir(A, B, C);
	imprimirma(M1,M2);
	
	reves(A);
	
	intercalar(B,C,D);
	
	ordenara(A);
	
	cargarvectore(B,C,E);
	
	cargandof(A,F);
    
	return 0;
}

void cargar(int vec[30], int x)
{
	int i;
	
	for(i=0; i<30; i++)
	{
		if(x==1)
		{
			vec[i]=rand()%900+100;
		}
		else
		{
			if(x==2)
			{
				vec[i]=(rand()%450+50)*2;
			}
			else
			{
				vec[i]=((rand()%450+50)*2)+1;
			}
		}
	}
}

void matriz(int mat[15][15], int x)
{
	int i, j;
	
	for(i=0; i<15; i++)
	{
		for(j=0; j<15; j++)
		{
			if(x==1)
			{
				mat[i][j]=rand()%900+100;
			}
			else
			{
				mat[i][j]=rand()%9000+1000;
			}
		}
	}
}

void imprimir(int V1[30], int V2[30], int V3[30])
{
	int i;
	
	printf("A \t B \t C");
	
	for(i=0; i<30; i++)
	{
		printf("\n %d \t %d \t %d",V1[i],V2[i],V3[i]);
	}
	
	system("PAUSE");
}

void imprimirma(int mat1[15][15], int mat2[15][15])
{
	int i,j;
	
	printf("\n Matriz 1: ");
	
	for(i=0; i<15; i++)
	{
		printf("\n");
		for(j=0; j<15; j++)
		{
			printf(" %d ",mat1[i][j]);
		}
	}
	
	printf("\n\n Matriz 2: ");
	
	for(i=0; i<15; i++)
	{
		printf("\n");
		for(j=0; j<15; j++)
		{
			printf(" %d",mat2[i][j]);
		}
	}
	
	system("PAUSE");
}

void reves(int V1[30])
{
	int i;
	
	printf("\n A \t A reves");
	for(i=0; i<30; i++)
	{
		printf("\n %d \t %d",V1[i],V1[29-i]);
	}
	
	system("PAUSE");
}



void intercalar(int V2[30], int V3[30], int VR[60])
{
	
	int i, j=0;
	
	for(i=0; i<30; i++)
	{
		VR[j]=V2[i];
		j++;
		VR[j]=V3[i];
		j++;
	}

	printf("\n B\tC\tV-INTER\n\n");
	
	for(i=0; i<60; i++)
	{
		if(i<30)
		{
			printf(" %d\t%d\t%d\n",V2[i],V3[i],VR[i]);
		}
		else
		    printf("\t\t%d\n",VR[i]);
	}
	system("PAUSE");	
}

void ordenara(int V1[30])
{
    int i=0,j=0,aux,Aaux[30];
     
    for(i=0;i<30;i++)
	{
        Aaux[i]=V1[i];
    }
     
    for(i=0;i<30;i++)
	{
        for(j=i+1;j<30;j++)
		{
            if(V1[i]<V1[j])
			{
                aux=V1[j];
                V1[j]=V1[i];
                V1[i]=aux;
            }
        }
    }
    printf("\n A-Desord\tA-Ord\n\n");
    
    for(i=0;i<30;i++)
	{
        printf(" %d\t%d\n",Aaux[i],V1[i]);
    }    
	
	system("pause");
}

void cargarvectore(int V2[30], int V3[30], int V5[30])
{
	int x;
	
	for(x=0; x<30; x++)
	{
		if(x<15)
		{
			V5[x]=V2[x+15];
		}
		else
		{
			V5[x]=V3[x-15];
		}
	}
	
	printf("\n\n B\tC\tE\n\n");
	for(x=0; x<30; x++)
	{
		printf(" %d\t%d\t%d\n",V2[x],V3[x],V5[x]);
	}
	
	system("PAUSE");
}

void cargandof(int Vec[30], int V6[30])
{
	int x, p=0;
	
	for(x=0; x<30; x++)
	{
		if(Vec[x]%2==0)
		{
			V6[p]=Vec[x];
			p++;
		}
	}
	
	printf("\n\n A\tA-PARES\n\n");
	for(x=0; x<30; x++)
	{
		printf(" %d\t%d\n",Vec[x],V6[x]);
	}
	
	system("PAUSE");
}













/*

printf("\n\n A\tA-PARES\n\n");
	for(x=0; x<30; x++)
	{
		if(x<p)
		{
			printf(" %d\t%d\n",V1[x],V6[x]);
		}
		else
		{
			printf(" \t%d\n",V1[x]);
		}
	}
	
	
	*/
