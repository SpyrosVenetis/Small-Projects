#include <stdio.h>

int main(){
	int table[4][4],i,j,t=0;
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{	
			scanf("%d",&table[i][j]);
		}
	}
	
	printf("diagonios: \n");
	
	for (i=0;i<4;i++)
	{
		for (j=t;j<4;j=j+4)
		{
			printf("%d\n",table[i][j]);
			t++;
		}
	}
	
	printf("mh diagonio: \n");
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			if (i!=j)
			{
			printf("%d\n",table[i][j]);
			}
		}
	}
}