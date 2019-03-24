#pragma once
#include <iostream>

void reverse(int array[5]) {

	int *vec = array;

	int *pointer2 = array + 5 - 1;

	while (array < pointer2) {

		*vec = *pointer2;
		*pointer2 = *vec;
		*vec = *pointer2;

		vec++;
		pointer2--;
	}
}