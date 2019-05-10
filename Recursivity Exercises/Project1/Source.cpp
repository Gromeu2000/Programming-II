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

int main() {

	recursiveFunc(0);
	std::cout << recursiveFunc2(4) << std::endl;
	std::cout << recursiveFunc3(9) << std::endl;
	system("pause");
	return 0;
}