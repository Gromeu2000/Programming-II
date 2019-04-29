#pragma once

#include <cassert>
#include <iostream>

#define QUEUE_CHUNK_SIZE 8

class Queue2
{
public:
	~Queue2() {

		delete[]_array;
	}

	void enqueue(int value) {

		if(num_elements == capacity) {

			increaseCapacity();
		}

		if (num_elements == 0) {

			index_front = 0;
			index_back = 0;
		}
		else {

			index_back = (index_back + 1) % capacity;
		}

		_array[index_back] = value;
		num_elements++;
	}

	void dequeue() {

		assert(num_elements > 0 && "The queue is empty");

		index_front = (index_front + 1) % capacity;
		num_elements--;

		if (num_elements == 0) {

			index_back = -1;
			index_front = -1;
		}
	}

	int size() const {

		return num_elements;
	}

	bool empty() const {

		if (num_elements == 0) {

			return true;
		}

		else
			return false;
	}

	void print() const {

		for (int i = 0; i < num_elements; i++) {

			std::cout << _array[(index_front + i) % capacity] << " ";
		}

		std::cout << std::endl;
	}

	void clear() {

		delete[] _array;
		_array = nullptr;
		capacity = 0;
		num_elements = 0;
		index_front = -1;
		index_back = -1;
	}

private: 

	void increaseCapacity() {

		capacity += QUEUE_CHUNK_SIZE;
		int *newArray = new int[capacity];
		for (int i = 0; i < num_elements; i++) {

			newArray[i] = _array[(index_front + i) % num_elements];
		}
		delete[] _array;
		_array = newArray;
		index_front = 0;
		index_back = num_elements - 1;
	}

	int *_array = new int[QUEUE_CHUNK_SIZE];
	int index_front = -1;
	int index_back = -1;
	int num_elements = 0;
	int capacity = QUEUE_CHUNK_SIZE;
};