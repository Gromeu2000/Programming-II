#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class String {

private:

	char* array = nullptr;
	int size = 0;

public:

	String() {
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
	~String() {

		delete[] array;
	}

	bool empty() const {

		if (size == 0) {

			return true;
		}

		return false;
	}

	int Size() const {

		return strlen(array);

	}
	
	void clear() {

		delete[] array;
		size = 0;
	}

	const char *c_str() const {

		return array;
	}
	
	/*Copies the passed string into the internals of
	the object*/
	void operator=(const String &string) {

		delete[] array;
		size = strlen(string.array);
		array = new char[size + 1];
		strcpy(array, string.array);
	}

	/*Concatenates the passed string into the
	internals of the object*/
	void operator+=(const String &string) {

		delete[] array;
		size = strlen(string.array);
		strcat(array, string.array);
		size++;
	}

	/*Compares two strings, returns true if they are
	equal, and false otherwise*/
	bool operator==(const String &string) const {

		if (strcmp(string.array, array) == 0) {

			return true;
		}

		else {

			return false;
		}
	}

	bool operator!=(const String &string) const {

		if (strcmp(string.array, array) == 1) {

			return true;
		}

		else {

			return false;
		}
	}

};

int main() {

	String s1;
	String s2 = "Sexy PacoPepe";
	String s3 = "Totoro";
	String s4 = "Sexy PacoPepe";

	std::cout << s1.c_str() << std::endl;
	std::cout << s3.c_str() << std::endl;

	if (s1.empty() == true) {

		std::cout << "The string1 is empty ma men" << std::endl;
	}

	else {

		std::cout << "The string1 is full ma niggah" << std::endl;
	}

	std::cout << "The string2 has " << s2.Size() << " characters." << std::endl;

	if (s2 == s3) {

		std::cout << "Strings are equal, TRY AGAIN NOOB" << std::endl;
	}

	else {

		std::cout << "Strings are not equal, NICE" << std::endl;
	}

	if (s2 != s4) {

		std::cout << "Strings are not equal, NICE" << std::endl;
	}

	else {

		std::cout << "Strings are equal, TRY AGAIN NOOB" << std::endl;
	}

	s2.clear();

	std::cout << "The string2 has " << s2.Size() << " characters." << std::endl;

	s2 += s3;

	system("pause");
	return 0;

}