#include <iostream>

void sum (int val1, int val2, int *res) {

		*res = val1 + val2;
}

void ExerciseII() {

	int v1, v2;

	std::cout << "Please insert a number: " << std::flush;
	std::cin >> v1;

	std::cout << "Please insert another number: " << std::flush;
	std::cin >> v2;

	int result;

	sum(v1, v2, &result);

	std::cout << result << std::endl;

}