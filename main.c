#include <stdio.h>

int main () {
	int opcio = 0;

	printf("Menu\n");
	printf("1.- Afegir repo\n");
	printf("2.- Modificar repo\n");
	printf("3- Eliminar repo\n");
	printf("4.- Sortir\n");
	do{
		switch(opcio){
		case 1:
			printf("Afegir repo");
			break;
		case 2:
			printf("MOdificar repo");
			break;
		case 3:
			printf("Eliminar repo");
			break;
		case 4:
			printf("Adeu");
			break;
		default:
			printf("No has introducido un numero valido! :\(");
	}
	}while (opcio != 4);
	
	

	
	return 0;
}
