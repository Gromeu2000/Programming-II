#include <iostream>
#include <string.h>

typedef const char cchar;

class Player {

private:
	char name[19];
	unsigned short life;
	bool invincible = false;
	bool* capabilities = new bool[3]();
	bool* weapon = new bool[3]();

public:
	
	Player(cchar *name2) : life(3), invincible(false) {
	
		strcpy(name, name2);
		capabilities[1] = true;
	}

	~Player() {
	
		delete[] capabilities;
		delete[] weapon;
	}

	unsigned char getName() const {
		
		return *name;
	}

	void PrintNumLifes() const {

		std::cout << life << std::endl;
	}

	void PrintInvincible() const {

		while (invincible) {

			std::cout << "The player is invincible" << std::endl;
			return;
		}

		std::cout << "The player is not invincible" << std::endl;
	}

	void PrintCapibilities() const {

			for (int i = 0; i < 3; i++) {

				if (capabilities[i]) {

					std::cout << capabilities[i] << std::endl;
				}
			}
	}

	void PrintWeapon() const {

			for (int i = 0; i < 3; i++) {

				if (weapon) {

					std::cout << weapon[i] << std::endl;
				}
			}
	}

	void EqualOperator() const {

		const char* name2 = "Pepe";

		if (strcmp(name, name2) == 0) {

			std::cout << "Sorry, same player" << std::endl;
		}

		else {

			std::cout << "Available name" << std::endl;
		}
	}
};

class Item{

private:
	char item_name[25];

public:
	Item(cchar *In) {
	
		strcpy(item_name, In);
	}

	~Item() {}
};

int main() {

	system("pause");
	return 0;
}