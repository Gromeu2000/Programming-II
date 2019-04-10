#pragma once

#define DYNAMIC_ARRAY_CHUNK_SIZE 5
#define DYNAMIC_ARRAY_INITIAL_CAPACITY 5

class DynamicArray {

private:
	void increseCapacity() {

		mArray = new int[DYNAMIC_ARRAY_CHUNK_SIZE + 1];
		mCapacity = DYNAMIC_ARRAY_CHUNK_SIZE;

	}

	int *mArray = nullptr;
	unsigned int mCapacity = DYNAMIC_ARRAY_INITIAL_CAPACITY;
	unsigned int mSize = 0;

public:
	DynamicArray() {

		mArray = new int[DYNAMIC_ARRAY_CHUNK_SIZE + 1];
		mCapacity = DYNAMIC_ARRAY_CHUNK_SIZE;
		mSize = 0;
	};

	~DynamicArray() {
	
		delete[] mArray;
	};

	bool empty()const;

	unsigned int size() const;


	int &operator[](unsigned int index);

	const int &operator[](unsigned int index) const;


	void push_back(int value) {
	
		if (mSize < mCapacity) {

			value = mArray[DYNAMIC_ARRAY_CHUNK_SIZE];
			mSize++;
		}

		if (mSize == mCapacity) {

			mArray = new int[DYNAMIC_ARRAY_CHUNK_SIZE + 1];
			mCapacity += DYNAMIC_ARRAY_CHUNK_SIZE;

			value = mArray[DYNAMIC_ARRAY_CHUNK_SIZE];
			mSize;
		}
	};

	void push_front(int value);

	void insert(unsigned int index, int value);

	void erase(unsigned int index);

	void clear();


	void shrink_to_fit();
};