#include <stdio.h>

int pol(int a,int b,int c){
	int x,apo;
	printf("Dwse arithmo: ");
	scanf("%d",&x);
	apo = (a*x*x)+(b*x)+c;
	return apo;
}

void swap(){
int num1,num2,temp;
printf("Dwse enan arithmo: ");
scanf("%d",&num1);
printf("Dwse deutero arithmo: ");
scanf("%d",&num2);
temp = num1;
num1 = num2;
num2 = temp;
printf("oi arhthmoi antikatastathikan: num1=%d,num2=%d\n",num1,num2);
}

int main(){
	int ap;
	printf("Patiste 1 gia antikatastash h 2 gia polyonimo: ");
	scanf("%d",&ap);
	if (ap == 1){
		swap();
	}
	else if (ap == 2){
		printf("Apotelesma: %d",pol(5,12,9));
	}
	else {
		printf("Error");
	}
}