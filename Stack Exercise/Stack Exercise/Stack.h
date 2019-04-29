#pragma once

#define MAX_CHUNK_SIZE 10

class Stack
{
public:
	// Ctor. and Dtor.
	~Stack() {

		delete[] _array;
	}
	// Modifiers
	void push(int value) {

		if (_top > capacity) {

			increaseCapacity();
		}
		else {

			_top = (_top + 1);
		}

		_array[_top] = value;
		_top++;
	}
	void pop() {

		if (_top > -1) {

			_top--;
		}
	}
	// Getters
	int top() const {

		return _array[_top];
	}
	bool empty() const {

		if (_top == -1) {

			return true;
		}

		else {

			return false;
		}
	}

private:

	void increaseCapacity() {

		capacity += MAX_CHUNK_SIZE;
		int *New_array = new int[capacity];
		for (int i = 0; i < _top; i++) {

			New_array[i] = _array[i];
		}
		delete[] _array;
		_array = New_array;
	}

	int _top = -1; // Current top index (-1 if empty)
	int *_array = new int[MAX_CHUNK_SIZE]; // Dynamically allocated array
	int capacity = MAX_CHUNK_SIZE;
	int num_elements = 0;
};