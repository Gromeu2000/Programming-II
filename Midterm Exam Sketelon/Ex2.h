/* ----------------------------------------------------------------------- */
/*                         INSERT YOUR NAME HERE                           */
/* ----------------------------------------------------------------------- */

#ifndef EX2_H
#define EX2_H

// Uncomment to test the exercise
#define TEST_EX2

int partialSum(int* pIntArray, int pArraySize, int pInitPos, int pEndPos)
{


	// TO DO: Insert your code here
	int sum = 0;

	if (pInitPos > pEndPos || pEndPos >= pArraySize || pInitPos < 0) {

		return 0;
	}

	for (int i = pInitPos; i <= pEndPos; i++) {

		sum += *(pIntArray + i);
	}

	return sum;
}


#endif