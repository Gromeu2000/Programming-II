#include <iostream>

void reverse(int *array, int sizeArray) {

	for (int i = sizeArray - 1; i >= 0; i--) {

		std::cout << *(array + i) << " " << std::flush;
	}
}

void ExerciseIII() {

	int array3[10] = {};

	std::cout << "Please insert 10 numbers: " << std::flush;

	for (int i = 0; i < 10; i++) {

		std::cin >> *(array3 + i);
	}

	reverse(array3, 10);
}