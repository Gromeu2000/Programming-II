#include <iostream>

void printChar(char *mystring) {

	for (int i = 0; mystring[i] != '\0'; i++) {

		std::cout << mystring[i] << std::flush;
	}

	std::cout << std::endl;
}

int sizeWord(char *word) {

	int count = 0;

	for (int i = 0; word[i] != '\0'; i++) {

		count++;
	}

	return count;
}

void concat(char *word1, char *word2, char *result) {

	int i = 0;

	for (int i = 0; word1[i] != '\0'; i++) {

		result[i] = word1[i];
	}

	for (int j = 0; word2[i] != '\0'; i++, j++) {

		result[i] = word2[j];
	}

	result[i] = '\0';
}

void ExerciseV() {

	char word1[64];
	char word2[64];

	std::cout << "Insert a word: " << std::flush;
	std::cin >> word1;

	std::cout << "Insert a word: " << std::flush;
	std::cin >> word2;

	int count1 = sizeWord(word1);
	int count2 = sizeWord(word2);

	char *newWord = new char[count1 + count2 + 1];

	concat(word1, word2, newWord);

	printChar(newWord);

	delete[] newWord;
}