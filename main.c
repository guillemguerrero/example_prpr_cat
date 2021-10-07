#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main () {
	//printf("Hola alumn@s de Projectes!!:)\n");
	write(1, "Hola alumn@s de SO!! :)\n", strlen("Hola alumn@s de SO!! :)\n"));
	return 0;
}
