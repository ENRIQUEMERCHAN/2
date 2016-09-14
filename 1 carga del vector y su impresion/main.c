#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int vec[20];
	int x;
	
	for(x=0;x<20;x++)// para llenar el vector
	{
		printf("v[%d]=",x);
		scanf("%d",&vec[x]);
	}
	for(x=0;x<20;x++)// para mostar el vector
	{
		printf("\n %d",vec[x]);
	}
	
	return 0;
}
