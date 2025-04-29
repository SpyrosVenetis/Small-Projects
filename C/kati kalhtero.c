#include <stdio.h>

int main(){
	int table[4][4],i,j;
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{	
			printf("Dwse noumro: ");
			scanf("%d",&table[i][j]);
		}
	}
	
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			if (i==j)
			{
			printf("X");
			}
			else
			{
			printf("O");
			}
		}
		printf("\n");
	}
}