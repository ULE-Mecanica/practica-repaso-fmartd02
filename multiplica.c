#include <stdio.h>
int multiplica(int x, int y);
int main () {
	int a,b,c;
	printf("Introduce dos números:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	c=multiplica(a,b);
	printf("El resultado es: %i\n",c);
	return 0;
}

int multiplica (int x, int y){
	int i, dev;
	dev=0;
	for (i=y;i>0;i--){
		dev=dev+x;
	}
	return dev;
}
