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
	i=num1;
	fact=1;
	do {
		fact=fact*i;
		i--;
	}
	while(i>0);
	return fact;
}
