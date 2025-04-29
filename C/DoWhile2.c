#include <stdio.h>

int main() {
	int age;
	do{
		printf("Dwse hlikia apo 0 mexri 119: ");
		scanf("%d", &age);
	} while (age <= 0 || age > 120);
	if (age <= 4){
		printf("Nhpio");
	}
	else if (age <=12){
		printf("paidi");
	}
	else if (age <=18){
		printf("efhvos");
	}
	else if (age <=35){
		printf("neos");
	}
	else if (age <=65){
		printf("wrimos");
	}
	else if (age <=80){
		printf("hlikiwmenos");
	}
	else if (age > 80){
		printf("poly hlikiwmenos");
	}
}