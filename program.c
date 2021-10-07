#include <stdio.h>

void showMenu () {
    printf ("MENU\n");
    printf ("1. Agregar repo");
    printf ("2. Modificar repo");
    printf ("3. Eliminar repo");
    printf ("4. Salir");
}

int main () {
    showMenu ();
    return 0;
}
