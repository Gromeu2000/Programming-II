#include <iostream>

int recursiveFunc2(int n) {

	if (n > 0) {

		return n * (recursiveFunc2(n - 1));
	}

	if (n == 0) {

		return 1;
	}
	
}

int recursiveFunc3(int j) {

	if (j == 0) {

		return 0;
	}

	else if (j == 1) {

		return 1;
	}
	else {

		return recursiveFunc3(j - 1) + recursiveFunc3(j - 2);
	}

}

void recursiveFunc( int i ) {

	if (i < 10) {

		recursiveFunc(i + 1);
		std::cout << "Hola weon" << i << std::endl;
		
	}
	else if (i == 10) {

		std::cout << "Adios reculiao" << std::endl;
	}
	
	
}

int numTrues(bool vec[], int sizeVec, unsigned int index) {

	if (index < sizeVec) {
		
		int count = 0;
		
		numTrues(vec, sizeVec, index + 1);
		
		if (vec[index] == true) {

			count++;
		}
		
		return count + numTrues(vec, sizeVec, index + 1);
	}
	else {

		return 0;
	}
	
}

bool searchRec(int vec[], int sizeVec, unsigned int index, int val) {

	if (index < sizeVec) {

		searchRec(vec, sizeVec, index + 1, val);
		if (vec[index] == val) {

			std::cout << "The val is in the array" << std::endl;
			return true;
		}
		else {

			std::cout << "The val is not in the array" << std::endl;
		}
	}
	else {
		return false;
	}
}
int main() {

	recursiveFunc(0);
	std::cout << recursiveFunc2(4) << std::endl;
	std::cout << recursiveFunc3(9) << std::endl;
	bool vec[] = { true, false, true, true, true, false };
	int vec1[] = { 1, 2, 3, 4, 5, 6, 7 };
	std::cout << numTrues(vec, 6, 0) << std::endl;
	std::cout << searchRec(vec1, 7, 0, 4) << std::endl;
	system("pause");
	return 0;
}