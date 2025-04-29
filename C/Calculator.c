#include <stdio.h>
#include <stdlib.h>

void sum(float num1,float num2) {
	float apo;
	apo = num1 + num2;
	printf("H prosthesh tou %.2f kai tou %.2f einai %.2f\n",num1,num2,apo);
}

void sub(float num1,float num2) {
	float apo;
	apo = num1 - num2;
	printf("H aferesh tou %.2f kai tou %.2f einai %.2f\n",num1,num2,apo);
}

void mult(float num1,float num2) {
	float apo;
	apo = num1 * num2;
	printf("O polaplasiasmos tou %.2f kai tou %.2f einai %.2f\n",num1,num2,apo);
}

void divide(float num1,float num2) {
	float apo;
	apo = num1 / num2;
	printf("H dieresh tou %.2f kai tou %.2f einai %.2f\n",num1,num2,apo);
}

int main() {
	float num1,num2;
	char tel;
	printf("Dwse Telesth: ");
	scanf("%c",&tel);
	printf("Dwse prwto noumero: ");
	scanf("%f",&num1);
	printf("Dwse deftero noumero: ");
	scanf("%f",&num2);
	if (tel == '+') {
		sum(num1,num2);
	}
	
	if (tel == '-') {
		sub(num1,num2);
	}
	
	if (tel == '*') {
		mult(num1,num2);
	}
	
	if (tel == '/') {
		divide(num1,num2);
	}
	system("PAUSE");
}