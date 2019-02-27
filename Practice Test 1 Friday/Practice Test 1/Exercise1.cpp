#include <iostream>

void ExerciseI() {

	int array[10] = {};
	int* ptr = array;

	for (int i = 0; i < 10; i++) {

		std::cout << (array + i) << std::endl;
	}
}