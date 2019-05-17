#pragma once

void merge(int* array, int begin, int mid, int end){

	//Reserve dynamic memory for 2 arrarys
	//copy array into the 2 sub arrays
	//merge the 2 sub arrays into array
	//delete the 2 sub arrays
}

void mergesort(int *array, int begin, int end) {

	if (begin < end) {

		int mid = (begin + end) / 2;
		mergesort(array, mid + 1, end);
		merge(array, begin, mid, end);
	}
}