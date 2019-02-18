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
#if 0
int main() {

	int vec[3] = { 1,2,3 };
	int *ptr2a = vec;

	for (int i = 0; i < 3; i++) {

		std::cout << vec[i] << std::endl;
	}

	for (int i = 0; i < 3; i++) {

		std::cout << *(vec + i) << std::endl;
	}

	for (int i = 0; i < 3; i++) {

		std::cout << *(ptr2a++) << std::endl;
	}
	system("pause");
	return 0;
}
#endif
#if 0
void add5(int *p) {

	*p += 5; // tambien se puede poner *p = *p + 5; 
}

int main() {

	int num = 5;
	add5(&num);
	std::cout << num << std::endl;

	system("pause");
	return 0;
}
#endif
#if 0
int sum(int *ptr, int size) {

	int result = 0;
	
	for (int i = 0; i < size; i++) {

		result += ptr[i];
	}

	return result;
}

int main() {
	
	int array[3] = { 1,2,3 };
	int res = sum(array, 3);

	std::cout << res << std::endl;

	system("pause");
	return 0;
}
<<<<<<< HEAD
#endif
#if 0
void charFunc(const char *ptr, int size) {

	for (int i = 0; ptr[i] != '\0'; i++) {

	std::cout << ptr[i] << std::endl;
	}

}

int main() {
	const char *ptr = "Hello world of files";
	charFunc(ptr, 90);

	system("pause");
	return 0;
}
#endif
=======

#endif
>>>>>>> f2ae3d5c95fc47d9ec30f9f8ef292b909f18c782
