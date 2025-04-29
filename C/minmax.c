#include <stdio.h>

int x,y,z;

void minmax(){
	int maximum, minimum;
	if (x > y) {
		if (x > z) {
			maximum = x;
		}
		else {
			maximum = z;
		}
	}
	else if (y > z) {
		maximum = y;
	}
	else {
		maximum = z;
	}
	
	if (x < y) {
		if (x < z) {
			minimum = x;
		}
		else {
			minimum = z;
		}
	}
	else if (y < z) {
		minimum = y;
	}
	else {
		minimum = z;
	}
	printf("O %d einai o megaliteros\n", maximum);
	printf("O %d einai o mikroteros\n", minimum);
}

int main() {
	printf("Dwse tris arithmous\n");
	printf("X=");
	scanf("%d", &x);
	printf("Y=");
	scanf("%d", &y);
	printf("Z=");
	scanf("%d", &z);
	minmax();
}