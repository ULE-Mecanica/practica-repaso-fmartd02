#include <stdio.h>
int divide(int x, int y);
int main () {
	int a,b,c;
	printf("Introduce dos numeros: \n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=divide(a,b);
	printf("El resultado es: %i \n",c);
	return 0;
}

int divide (int x, int y) {
	int dev = 0;
	while (x>=y) {
	x=x-y;
	dev++;
	}
	return dev;
}
