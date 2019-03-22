#include <iostream>
#include <string.h>

typedef const char cchar;

class Player {

private:
	cchar *name;
	unsigned short life;
	bool invincible = false;
	bool* capabilities = new bool[3]();
	bool* weapon = new bool[3]();

public:
	
	Player() : name("Pepe"), life(3), invincible(false), capabilities(false), weapon(false) {}

	~Player() {}

	unsigned char getName() const {

		std::cout << name << std::endl;
		
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

		if (capabilities) {

			for (int i = 0; i < 3; i++) {

				std::cout << capabilities[i] << std::endl;
			}
			
		}
	}

	void PrintWeapon() const {

		if (weapon) {

			for (int i = 0; i < 3; i++) {

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

	cchar *one_up = "One_Up";
	cchar *mini_mario = "Mini_Mario";
	cchar *super_mario = "Super_Mario";
	cchar *fire_flower = "Fire-Flower";
	cchar *ice_flower = "Ice_Flower";
	cchar *golden_flower = "Golden_Flower";

public:
	Item(cchar *ou, cchar *mm, cchar *sp, cchar *ff, cchar *iF, cchar *gf) : one_up(ou), mini_mario(mm), super_mario(sp), fire_flower(ff), ice_flower(iF), golden_flower(gf){}
	~Item() {}
};

int main() {

	system("pause");
	return 0;
}