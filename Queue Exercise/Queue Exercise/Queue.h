#pragma once
class Queue
{
public:
	// Ctor. and Dtor.
	Queue() {
		
		_array = new int[_back];
	}

	~Queue() {

		delete[_back] _array;
	}

	// Modifiers
	void enqueue(int value) {

		if (_back != -1) {

			_array = &_back;
			_back++;
		}
	}
	int dequeue() {

		_array = 0;
		for (int i = 0; i < _back; i++) {

			_array[i] = _array[i + 1];
		}
	}
	// Getters
	int size() const {

		return _back;
	}

	bool empty() const {

		if (_back != -1) {

			return false;
		}

		else
			return true;
	}

private:
	int _back; // Index to the back (-1 if empty)
	int *_array; // Dynamically allocated array
};