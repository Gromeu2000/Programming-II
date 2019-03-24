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
	
		strcpy_s(name, name2);
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

				if (weapon[i]) {

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

	void NumberLifes(Item &item) {

		if (strcmp(item.item_name, "One_Up") == 0) {

			life++;
		}

	}

	void Capabalities(Item &item) {

		for (int i = 0; i < 3; i++) {

			if (strcmp(item.item_name, "Mini_Mario") == 0) {

				capabilities[0] = true;
				capabilities[1] = false;
				capabilities[2] = false;
			}

			if (strcmp(item.item_name, "Super_Mario") == 0) {

				capabilities[0] = false;
				capabilities[1] = false;
				capabilities[2] = true;
			}

			else {

				capabilities[0] = false;
				capabilities[1] = true;
				capabilities[2] = false;
			}
		}
	}

	void Weapon(Item &item) {

		for (int i = 0; i < 3; i++) {

			if (strcmp(item.item_name, "Fire_Flower") == 0) {

				weapon[0] = true;
				weapon[1] = false;
				weapon[2] = false;
			}

			if (strcmp(item.item_name, "Ice_Flower") == 0) {

				weapon[0] = false;
				weapon[1] = true;
				weapon[2] = false;
			}

			if (strcmp(item.item_name, "Golden_Flower") == 0) {

				weapon[0] = false;
				weapon[1] = false;
				weapon[2] = true;
			}
		}
	}

	friend void starTouched(Player &player);
};

class Item{

private:
	char item_name[25];

public:
	Item(cchar *In) {
	
		strcpy_s(item_name, In);
	}
	
	friend class Player;

	~Item() {}
	
	
};

void starTouched(Player &player) {

	player.invincible = true;
}

int main() {

	system("pause");
	return 0;
}