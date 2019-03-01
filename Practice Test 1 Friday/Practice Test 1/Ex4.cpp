#include <iostream>

void absawp(int *arr1, int sizeArr1, int *arr2, int sizeArr2) {

	for (int i = 0; i < 20; i++) {

		arr1[i] = abs(arr2[i]);
	}
}

void generate(int *array, int size) {

	for (int i = 0; i < 20; i++) {

		array[i] = rand() % 20 - 10;
	}
}

void ExerciseIV() {

	int *array1 = new int[20]();
	int *array2 = new int[20];

	generate(array2, 20);
	absawp(array1, 20, array2, 20);

	for (int i = 0; i < 20; i++) {

		std::cout << array1[i] << " " << std::flush;
	}

	std::cout << std::endl;

	for (int i = 0; i < 20; i++) {

		std::cout << array2[i] << " " << std::flush;
	}

	delete[] array1;
	delete[] array2;
}