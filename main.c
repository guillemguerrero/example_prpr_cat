#include <stdio.h>
#include <string.h>
#include <unistd.h>
int main () {
	//printf("Hola alumn@s de Projectes!!:)\n");
	write(1, "Hola alumn@s de SO!! :)\n", strlen("Hola alumn@s de SO!! :)\n"));
	printf("Menú:\n\t1.Afegir repo\n\t2.Modificar repo\n\t3.Eliminar repo\n\t4.Sortir");

	return 0;
}
