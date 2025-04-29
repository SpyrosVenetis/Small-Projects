#include <stdio.h>

int main(){
	int table[10], i;
	for (i=0;i<=9;i=i+2){
		scanf("%d",&table[i]);
		table[i+1] = table[i] * 4;
	}
	for (i=0;i<=9; i=i+2){
		printf("to perigrama tou %d einai %d\n", table[i], table[i+1]);
	}
	return 0;
}