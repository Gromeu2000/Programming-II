#define _CRT_SECURE_NO_WARNINGS
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <string.h>
#include <iostream>
#include "DynamicArray.h"

int main() {
	DynamicArray array;
	// Insert from 0 to 99
	for (int i = 0; i < 20; ++i)
	{
		array.push_back(i);
	}
	array.insert(3, 40);
	// Will print from 1 to 98
	for (int i = 0; i < array.size(); ++i)
	{
		std::cout << array[i] << std::endl;
	}
	system("pause");
	return 0;
}

