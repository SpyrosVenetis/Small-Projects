#include <stdio.h>

int pol(int a,int b,int c)
{
	int x,apo;
	printf("Dwse arithmo: ");
	scanf("%d",&x);
	apo = (a*x*x)+(b*x)+c;
	return apo;
}

int main(){
	printf("Apotelesma: %d",pol(5,12,9));
	return 0;
}