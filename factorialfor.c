#include <stdio.h>
int factorial (int num1);
int main () {
	int a,b;
	printf("Introduzca un numero:\n");
	scanf("%d",&a);
	b=factorial(a);
	printf("El factorial de %d es: %d\n",a,b);
	return 0;
}

int factorial (int num1) {
	int i, fact;
	fact=1;
	for(i=num1;i>0;i--) {
		fact=fact*i;
	}
	return fact;
}
