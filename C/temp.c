#include <stdio.h>

void antimet() {
	int mx,m1,m2;
	printf("Dwse m1: ");
	scanf("%d,",&m1);
	printf("Dwse m2: ");
	scanf("%d,",&m2);
	mx = m1;
	m1 = m2;
	m2 = mx;
	printf("m1=%d,m2=%d\n",m1,m2);
}

int main() {
	antimet();
	antimet();
	antimet();
	antimet();
}