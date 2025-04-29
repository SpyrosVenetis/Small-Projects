#include <stdio.h>

int main(){
	int table[12],i,pk=3;
	printf("1.tetragono\n");
	printf("2.trigwno\n");
	printf("3.kyklos\n");
	for (i=0;i<=11;i=i+3){
		printf("Dwse mia tymh apo to 1 mexri 3: ");
		scanf("%d",&table[i]);
		if (table[i] < 3){
			printf("Dwse plevra: ");
			scanf("%d",&table[i+1]);
		}
		else {
			printf("Dwse thn akthna tou kyklou: ");
			scanf("%d",&table[i+1]);
		}
	}
	for (i=0;i<=11;i+3){
		if (table[i] = 1) {
			table[i+2] = table[i+1] * 4;
		}
		else if (table[i] == 2) {
			table[i+2] = table[i+1] * 3;
		}
		else{
			table[i+2] = 2 * pk * table[i+1];
		}
	}
	for (i=0; i<=11; i+3){
		if (table[i] == 1){
			printf("H perimetros tou tetragonou me plevra %d einai %d",table[i+1],table[i+2]);
		}
		else if (table[i] == 2){
			printf("H perimetros tou trigwnou me plevra %d einai %d",table[i+1],table[i+2]);
		}
		else{
			printf("H perimetros tou kyklopu me aktina %d einai %d",table[i+1],table[i+2]);
		}
	}
}