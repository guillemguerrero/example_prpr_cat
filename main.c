#include <stdio.h>

typedef struct UnStructGuay
{
	int nivellDeGuay;
	void* algo;
}UnStructGuay;

typedef struct UnStructNormal
{
	int nivellDeNormal;
	void* algo;
}UnStructGuay;


int main () {

	printf("Hola alumn@s de Projectes!!:)\n");	
	printf("Test introduit per alumnes\n");

	int a = 30;

	UnStructGuay structGuay = { 10000, &a} ;
	printf("%d", structGuay.nivellDeGuay);

	return 0;
}
