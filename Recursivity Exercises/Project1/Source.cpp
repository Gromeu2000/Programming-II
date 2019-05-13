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
			
			return true + searchRec(vec, sizeVec, index + 1, val);
			
		}
		else {

			return false + searchRec(vec, sizeVec, index + 1, val);
			
		}
	}
	else {
		return false;
	}
}

int sumElemsRec(int vec[], unsigned int sizeVec, unsigned int index) {

	if (index < sizeVec) {

		int sum = 0;
		sumElemsRec(vec, sizeVec, index + 1);
		sum += vec[index];
		return sum + sumElemsRec(vec, sizeVec, index + 1);

	}
	else {

		return 0;
	}
}
int main() {

	recursiveFunc(0);
	std::cout << recursiveFunc2(4) << std::endl;
	std::cout << recursiveFunc3(9) << std::endl;
	bool vec[] = { true, false, true, true, true, false };
	int vec1[] = { 1, 2, 3, 4, 5, 6, 7 };
	int vec2[] = { 11, 5, 6, 7, 8, 2 };
	std::cout << numTrues(vec, 6, 0) << std::endl;

	if (searchRec(vec1, 7, 0, 7) == true) {

		std::cout << "The number is in the array" << std::endl;
	}
	else if (searchRec(vec1, 7, 0, 7) == false) {

		std::cout << "The number is not in the array"<< std::endl;
	}

	std::cout << sumElemsRec(vec2, 6, 0) << std::endl;
	system("pause");
	return 0;
}