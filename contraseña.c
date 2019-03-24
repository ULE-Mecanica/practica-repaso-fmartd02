#include <stdio.h>

int main () {
	int i,a;
	i=2;
	printf("Introduzca una contraseña: \n");
	scanf("%d",&a);
	while (i>0) {
		i--;
		if (a==4567) {
			printf("Bienvenido\n");
			return 0;
		}
		else {
			if(a>4567) {
				printf("La contraseña introducida es mayor, introduzca otra:\n");
				scanf("%d",&a);
			}
			else {
				printf("La contraseña introducida es menor, introduzca otra:\n");
				scanf("%d",&a);
			}
		}
	}
	if(a==4567) {
		printf("Bienvenido\n");
	}
	else {
		if(a>4567) {
			printf("La contraseña introducida es mayor, intentelo más tarde.\n");
		}
		else {
			printf("La contraseña introducida es menor, intentelo más tarde.\n");
		}
	}
	return 0;
}
