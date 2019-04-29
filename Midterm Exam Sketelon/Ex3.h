/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX3_H
#define EX3_H

// Uncomment to test the exercise
#define TEST_EX3

#include <stdlib.h>

void swapReverse(int* vec1, int* vec2, int sizeVecs)
{


	// TO DO: Insert your code here
	int *tmp = new int;

	for (int i = 0; i < sizeVecs; i++) {

		*tmp = vec1[i];
		vec1[i] = vec2[sizeVecs - 1 - i];
		vec2[sizeVecs - 1 - i] = *tmp;
	}

	delete tmp;

}


#endif