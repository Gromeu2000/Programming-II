#pragma once

#include <assert.h>

#define DYNAMIC_ARRAY_CHUNK_SIZE 5
#define DYNAMIC_ARRAY_INITIAL_CAPACITY 5

class DynamicArray {

private:
	void increseCapacity() {

		mCapacity += DYNAMIC_ARRAY_CHUNK_SIZE;
		int *mArray2 = new int[mCapacity];
		for (int i = 0; i < mSize - 1; i++) {

			mArray2[i] = mArray[i];
		}

		delete[] mArray;
		mArray = mArray2;
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

	bool empty()const {

		if (mSize == 0) {

			return true;
		}

		else
			return false;
	}

	unsigned int size() const {

		unsigned int count = 0;

		for (int i = 0; i < mSize - 1; i++) {

			if (mArray[i] != '\0') {

				count++;
			}
		}
		return count;
	}

	int &operator[ ](unsigned int index) { return mArray[index]; }
	const int &operator[ ](unsigned int index) const { return mArray[index]; }

	void push_back(int value) {
	
		if (mSize < mCapacity) {

			value = mArray[mSize + 1];
			mSize++;
		}

		if (mSize == mCapacity) {

			mCapacity += DYNAMIC_ARRAY_CHUNK_SIZE;
			mArray = new int[mCapacity + 1];

			value = mArray[mSize + 1];
			mSize++;
		}
	};

	void push_front(int value) {

		if (mSize < mCapacity) {

			for (int i = mSize; i >= 0; i++) {

				mArray[i] = mArray[ i + 1];
			}

			*mArray = value;
		}

		if (mSize == mCapacity) {

			mCapacity += DYNAMIC_ARRAY_CHUNK_SIZE;

			for (int i = mSize; i >= 0; i++) {

				mArray[i] = mArray[i + 1];
			}

			*mArray = value;
		}
	}

	void insert(unsigned int index, int value) {

		assert(index <= mSize && "Index out of bounds");

		if (mSize < mCapacity) {

			for (int i = index; i < mSize - 1; i++) {

				mArray[i] = mArray[i + 1];
				
			}

			mArray[index] = value;
		}

		if (mSize == mCapacity) {

			mCapacity += DYNAMIC_ARRAY_CHUNK_SIZE;

			for (int i = index; i < mSize - 1; i++) {

				mArray[i] = mArray[i + 1];
			}

			mArray[index] = value;
		}
	}

	void erase(unsigned int index) {

		assert(index < mSize && "Index out of bounds");

		for (int i = index; i < mSize - 1; i++) {

			mArray[i] = mArray[i-1];
		}
	}

	void clear() {

		mSize = 0;
	}
};