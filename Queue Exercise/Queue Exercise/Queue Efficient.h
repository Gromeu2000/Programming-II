#pragma once
class Queue
{
public:
	// Ctor. and Dtor.
	Queue() {

		_array = new int[_back];
	}

	~Queue() {

		delete[] _array;
	}
	// Modifiers
	void enqueue(int value) {

		if (_back != -1 && _front != -1) {

			value = _back + 1;
			_back++;
		}
	}

	int dequeue() {

		if (_front != -1) {

			_front++;
		}
	}

	// Getters
	int size() const {

		int count;
		for (int i = _front; i < _back; i++) {

			count++;
		}

		return count;
	}

	bool empty() const {

		if (_back != -1 && _front != -1) {

			return false;
		}

		else
			return true;
	}
private:
	int _front; // Index to the front (-1 if empty)
	int _back; // Index to the back (-1 if empty)
	int *_array; // Dynamically allocated array
};