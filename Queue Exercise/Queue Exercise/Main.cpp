#include <iostream>
#include "Queue.h"
#include "Queue Efficient.h"
#include <stdlib.h>

int main() {

	Queue2 string;

	string.enqueue(1);
	string.enqueue(2);
	string.enqueue(3);
	string.enqueue(4);
	string.enqueue(5);
	string.enqueue(6);
	string.print();
	
	string.dequeue();
	string.print();

	string.clear();
	string.print();

	system("pause");
	return 0;
}