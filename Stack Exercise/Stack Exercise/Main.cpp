#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"

int main() {

	Stack s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.print();

	s.pop();
	s.print();

	system("pause");
	return 0;
}