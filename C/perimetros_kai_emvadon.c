/*Να γραφτει προγραμμα που να διαβαζει την ακτηινα ενος κυκλου και
στην συνεχεια να υπολογιζει και να τυπωνει την περιμετρο και το
εμβαδον του. Η τιμη π:3.14 να διλωθει σαν σταθερα */

#include <stdio.h>
#include <stdlib.h>

const float Pi = 3.14159;

float per(float r) {
	return 2*(Pi*r);
}

float emv(float r) {
	float A;
	return Pi*r*r;
}

int main() {
	
	float r = 0;
	printf("Dwse thn akthna tou kyklou: ");
	scanf("%f",&r);
	printf("H perimetros tou kyklou einai: %.2f\n",per(r));
	printf("To emvadon tou kyklou einai: %.2f\n", emv(r));
}