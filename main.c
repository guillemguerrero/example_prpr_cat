/*********************************
 *  Created by Tomas Uzcudun
 *  Date: 07/10/2021
 *  Program: Print Square
 ********************************/

#include <stdio.h>

#define SIZE 5

int main () {
	int i, j;

	printf("A Square\n\n");

	for (i = 0; i < SIZE; i++) {
	    for (j = 0; j < SIZE; j++) {
	        printf ("*");
	    }
	    printf ("\n");
	}

	return 0;
}
