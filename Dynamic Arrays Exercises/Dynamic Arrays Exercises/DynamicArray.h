#pragma once

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

		for (int i = index; i < mSize - 1; i++) {

			mArray[i] = mArray[i+1];
		}
	}

	void clear() {

		mSize = 0;
	}


	void shrink_to_fit();
};