#include <stdio.h>

#include "linkedlist.h"

int main (int argc, char ** argv) {
	LinkedList list;
	int i;
	int value, max;

	if (argc < 2) {
		printf("Please add the integer values to insert to the list.\n");
		printf("Example: <program> <values>\n");
	}
	else {
		list = LINKEDLIST_create();
		// argv[0] is the program name
		for (i = 1; i < argc; i++) {
			value = atoi(argv[i]);
			LINKEDLIST_add(&list, value);
		}
		
		// FIND THE MAXIMUM VALUE.
		LINKEDLIST_goToHead(&list);
		// We know we have at leaste one value, otherwise ARGC wouldn't be 
		//  greater or equal to 2.
		// Whenever we look for the max value, we always start assuming that
		//  the first value is the first local max.
		max = LINKEDLIST_get(&list);
		printf("Current maximum value is: %d\n", max);
		// We get to the second value (if it exists).
		LINKEDLIST_next(&list);

		// We loop through the list until we get to the end of it.
		while (!LINKEDLIST_isAtEnd(list)) {
			// For each value, we check if that value is the new max.
			value = LINKEDLIST_get(&list);
			if (value > max) {
				max = value;
				printf("Current maximum value is: %d\n", max);
			}
			LINKEDLIST_next(&list);
		}
		
		printf("The maximum value is %d\n", max);

		LINKEDLIST_destroy(&list);
	}

	return 0;
}


