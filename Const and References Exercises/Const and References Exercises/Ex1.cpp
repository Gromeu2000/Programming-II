#include <iostream>

void doubleNum(unsigned short& number) {

	number += number;
}

void Ex1() {

	unsigned short number;

	std::cout << "Please insert a number from 0-100: " << std::endl;
	std::cin >> number;

	doubleNum(number);

	std::cout << number << std::endl;


}