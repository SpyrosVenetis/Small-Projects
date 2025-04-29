#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float sum(float num,float apo) {
	apo += num;
	return apo;
}

float sub(float num, float apo) {
	apo -= num;
	return apo;
}

float mul(float num, float apo) {
	apo *= num;
	return apo;
}

float divi(float num,float apo) {
	apo /= num;
	return apo;
}

int main() {
	float num, apo = 0;
	char tel;
	bool kat = true;
	while (kat == true) {
		while ((getchar()) != '\n');
		printf("\nDwse telesti: ");
		scanf("%c",&tel);
		printf("\nDwse arhthmo: ");
		scanf("%f",&num);
		if (tel == 'q') {
			break;
		}
		if (tel == '+') {
			apo=sum(num,apo);
			printf("%f",apo);
		}
		if (tel == '-') {
			apo=sub(num,apo);
			printf("%f", apo);
		}
		if (tel == '*') {
			apo=mul(num,apo);
			printf("%f",apo);
		}
		if (tel == '/') {
			apo=divi(num,apo);
			printf("%f", apo);
		}
	} 
}