#include <stdio.h>

int main(){
	int table[10], a, i;
	for (i=0; i<=9; i++){
		printf("dwse timh gia thn thesh %d: ",i);
		scanf("%d",&table[i]);
	}
	for (i=0; i<=9; i++){
		printf("h timh sthn thesh %d einai %d\n",i,table[i]);
	}
}