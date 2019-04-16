#pragma once
class Stack
{
public:
	// Ctor. and Dtor.
	Stack() {

		_array = new int[_top];
	}
	~Stack() {

		delete[] _array;
	}
	// Modifiers
	void push(int value) {

		value = _top;
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
	int _top; // Current top index (-1 if empty)
	int *_array; // Dynamically allocated array
};