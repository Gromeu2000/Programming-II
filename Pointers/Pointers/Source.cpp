#include<stdio.h>
#include <stdlib.h>
#include <iostream>

#if 0

int main(){

	int num = 3;
	int *ptr1 = &num;
	std::cout << "First pointer adress: " << &num << std::endl;

	int *ptr1a = ptr1;
	std::cout << "Second memory adress pointer: " << ptr1a << std::endl;

	std::cout << "Value of second pointer: " << *ptr1a << std::endl;

	*ptr1 = 5;
	std::cout << "New value: " << *ptr1 << std::endl;
	

	system("pause");
	return 0;
}

#endif
#if 0

int main() {

	int vec[3] = { 1,2,3 };
	int *ptr2 = &vec[2];
	std::cout << &vec[2] << std::endl;
	std::cout << vec[0] << std::endl;

	system("pause");
	return 0;
}

#endif

int main() {

	int vec[3] = { 1,2,3 };
	int *ptr2a = vec;

	for (int i = 0; i < 3; i++) {

		std::cout << vec[i] << std::endl;
	}
	
	system("pause");
	return 0;
}