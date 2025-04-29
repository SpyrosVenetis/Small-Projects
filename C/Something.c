#include <stdio.h>
#define N 10

int main(){
	int table[N],i;
	
	for (i=0; i<N; i++){
		printf("Dwse enan arithmo: ");
		scanf("%d",&table[i]);
		printf("to noumero %d mpeike sthn thesh %d\n",table[i],i);
	}
	printf("O pinakas exei perilemvanei:\n");
	for (i=0; i<N; i++){
		printf("%d\n",table[i]);
	}
}