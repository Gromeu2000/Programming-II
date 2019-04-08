#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <string.h>

class String {

private:

	char* array = nullptr;
	int size = 0;

public:

	String(){
		array = new char[1];
		*array = '\0';
	}

	// Pasa un "smth"
	String(const char *s) {

		size = strlen(s);
		array = new char[size + 1];
		strcpy(array, s);
	}

	//Pasa un String (clase)
	String(String &s) {

		size = s.size;
		array = new char[s.size + 1];
		strcpy(array, s.array);
	}

	//Destructor
	~String(){
	
		delete[] array;
	}

	bool empty() const {

		if (size == 0) {

			return true;
		}

		return false;
	}

	//Tells if the array is empty
	void operator=(const char *string) {

		delete[] array;
		size = strlen(string);
		array = new char[size + 1];
		strcpy(array, string);

	}

	const char *c_str() const {

		return array;
	}
};

int main() {

	String s1;
	String s2 = "Sexy PacoPepe";
	String s3 = s2;

	std::cout << s1.c_str() << std::endl;
	std::cout << s3.c_str() << std::endl;

	if (s1.empty() == true) {

		std::cout << "The string is empty ma men" << std::endl;
	}

	else {

		std::cout << "The string is full ma niggah" << std::endl;
	}

	system("pause");
	return 0;
}