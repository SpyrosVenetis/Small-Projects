#include <stdio.h>

int main(){
	int min,max,ther[10],i,add=0;
	float MO;
	for (i=0;i<10;i++){
		do {
			printf("Dwse thn %dh thermokrasia: ",i+1);
			scanf("%d",&ther[i]);
		} while (ther[i] < -12 || ther[i] > 50);
	}
	
	max = ther[0];
	min = ther[0];
	for (i=0;i<10;i++){
		
		if (ther[i] > max){
			max = ther[i];
		}
		if (ther[i] < min){
			min = ther[i];
		}
		add += ther[i];
	}
	MO = add / 10.00;
	printf("Mesos oros = %.2f, max = %d, min = %d",MO,max,min);
}