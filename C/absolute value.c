#include <stdio.h>

int absolute(int value){
	if (value < 0) {
		value *= -1;
	}
	return value;
}

int main() {
	int x,i,j;
	printf("Dwse mia timh: ");
	for (i=0; i<5; i++) {
		scanf("%d",&x);
		printf("einai h %dh fora\n",i+1);
		printf("apolith timh tou %d einai %d\n",x,absolute(x));
	}
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			printf("%d+%d=%d\n",i,j,i+j);
		}
	}
	return 0;
}