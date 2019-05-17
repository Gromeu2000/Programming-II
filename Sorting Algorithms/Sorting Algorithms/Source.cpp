#include <iostream>
#include <cstdlib>

void print(int *array, int size) {

	for (int i = 0; i < size; i++) {

		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
}

void bubblesort(int *array, int size) {

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

int main() {

	int v[10] = { 9, 1, 8, 2, 7, 3, 6, 4, 5, 0 };
	print(v, 10);
	bubblesort(v, 10);
	print(v, 10);

	system("pause");
	return 0;
}