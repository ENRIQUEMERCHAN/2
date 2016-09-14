#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define F 4
#define C 4

int main(void)
{
    int i, j, mat[F][C], x = 0, y = C-1;
    
    srand(time(0));
//    -------------------- llenar matriz
    for( i = 0; i < F; i++)
    {
        for( j = 0; j < C; j++)// llenar la matriz
        {
            if( i == x && j == y )
            {
                mat[i][j]=999;
                 
                x++;
                y--;
            }
            else if( i == j)
            {
                mat[i][j] = 1000;
            }
            else
            {
                mat[i][j] = rand()%100;
            }
        }
    }
    // -------------------------- fin llenar la matriz
    
    for(i=0; i<F; i++)
    {
        printf("\n");
        for(j=0; j<C; j++)
        {
            if(mat[i][j]==999)
            {
            	printf("s\t");
			}
			else if(mat[i][j]==1000)
            {
                printf("p\t");
            }
            else
            {
                printf("%d\t",mat[i][j]);
            }
        }
    }
  
  system("PAUSE");	
  return 0;
}
