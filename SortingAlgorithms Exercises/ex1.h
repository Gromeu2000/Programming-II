#pragma once

// INSTRUCTIONS:
// - Press 'b' to call the bubblesort function
// - Press 'm' to call the mergesort function
// - Press 'q' to call the quicksort function
// - Press space to randomize the tile set
// - Press <esc> to exit

// Change these numbers to resize the tile grid dimensions
#define GRID_WIDTH 100
#define GRID_HEIGHT 100


// Bubblesort functions ////////////////////////////////////////////////

void bubblesort(uint32 * array, int size)
{

	// TODO: Insert your code here
	int var = 0;

	for (int i = 0; i < size; i++) {

		for (int j = 1; j < size; j++) {

			if (array[i] < array[i - 1]) {

				var = array[i];
				array[i] = array[i - 1];
				array[i - 1] = var;
			}

			if (array[j] < array[j - 1]) {

				var = array[j];
				array[j] = array[j - 1];
				array[j - 1] = var;

			}
		}
	}

}


// Mergesort functions /////////////////////////////////////////////////

void merge(uint32 *array, int begin, int mid, int end)
{
	// Create the two subarrays
	// TODO
	uint32 *tmp1 = new uint32[(mid - begin) + 1];
	uint32 *tmp2 = new uint32[(end - mid)];

	// Copy array parts into the subarrays
	// TODO
	for (int i = 0; i < (mid - begin) + 1; i++) {

		tmp1[i] = array[(begin + i)];
	}
	for (int j = 0; j < (end - mid); j++) {

		tmp2[j] = array[(mid + 1 + j)];
	}

	// Initialize indices for tmp1, tmp2, and array, respectively
	int i = 0;
	int j = 0;
	int k = begin;

	// Merge tmp1 and tmp2 into array
	// TODO
	while (i < (mid - begin) + 1 && j < end - mid) {

		if (tmp1[i] <= tmp2[j]) {

			array[k] = tmp1[i];
			i++;
		}
		else {

			array[k] = tmp2[j];
			j++;
		}

		k++;

	}

	while (i < (mid - begin) + 1) {

		array[k] = tmp1[i];
		i++;
		k++;
	}

	while (j < end - mid) {

		array[k] = tmp2[j];
		j++;
		k++;
	}

	// Delete tmp arrays
	// TODO
	delete[] tmp1;
	delete[] tmp2;
}

void mergesort(uint32 *array, int begin, int end)
{

	// TODO: Insert your code here
	if (begin < end) {

		int m = 0;
		m = (begin + end)/2;
		mergesort(array, begin, m);
		mergesort(array, m + 1, end);
		merge(array, begin, m, end);
	}
	
}


// Quicksort functions /////////////////////////////////////////////////

void swap(uint32 *a, uint32 *b) {

	int t = *a;
	*a = *b;
	*b = t;
}

int partition(uint32 *array, int begin, int end)
{
	// Take the last value (for example) as the pivot
	// Could be any other value in the array
	uint32 pivot = array[end];

	// Initialize the pivot index at the beginning
	int pivotIndex = begin - 1;

	// Traversing the array:
	// Each value we find that is less than the pivot we push
	// it to the left (swap) and increase the pivot index
	// TODO
	for (int j = begin; j <= end - 1; j++) {

		if (array[j] <= pivot){

			pivotIndex++;
			swap(&array[pivotIndex], &array[j]);
			/*int var = array[pivotIndex];
			array[pivotIndex] = array[j];
			array[j] = var;*/
		}
	}

	// Put the pivot in its position
	// TODO
	/*int var = array[pivotIndex + 1];
	array[pivotIndex + 1] = array[end];
	array[end] = var;*/
	swap(&array[pivotIndex + 1], &array[end]);

	return pivotIndex + 1;
}

void quicksort(uint32 *array, int begin, int end)
{

	// TODO: Insert your code here
	if (begin < end) {

		int pi = 0;
		pi = partition(array, begin, end);
		quicksort(array, begin, pi - 1);
		quicksort(array, pi + 1, end);
	}

}
