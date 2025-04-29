#include <stdio.h>

int main() {
	int vath;
	do {
		printf("Dwse enan arithmo apo to 1 ews to 10: ");
		scanf("%d",&vath);
	} while(vath < 1 || vath >10);
	
	if (vath < 5){
		printf("Emines");
	}
	else{
		printf("Perases");
	}
}