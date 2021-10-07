#include <stdio.h>

int main () {
	int opcio = 0;

	printf("Menu\n");
	printf("1.- Afegir repo\n");
	do{
		switch(opcio){
		case 1:
			printf("Afegir repo");
			break;
		default:
			printf("No has introducido un numero valido! :\(");
	}
	}while (opcio != 4);
	
	

	
	return 0;
}
