#pragma once
#include <iostream>
#include <string.h>
#include "Item.h"

class Player {

private:
	char name[25];
	unsigned short lifes;
	bool invincible;
	bool* capabilities = new bool[3];
	bool* weapon = new bool[3];

public:

	Player() {}

	Player(const char* nameP) {

		strcpy_s(name, nameP);
		lifes = 3;
		invincible = false;
		capabilities[1] = true;
	}

	~Player() {

		delete[] capabilities;
		delete[] weapon;
	}

	const char *getName() const {

		return name;
	}

	void printNumLIfes() const {

		std::cout << lifes << std::endl;
	}

	void printInvincible() const {

		if (invincible) {

			std::cout << "The player is invincible" << std::endl;
		}

		else {

			std::cout << "The player is not invincible" << std::endl;
		}
	}

	void printWeapon() const {

		for (int i = 0; i < 3; i++) {

			if (weapon[i] == true) { std::cout << "Weapon flag "<< i << " is set to true" << std::endl; }
			else{ std::cout << "Weapon flag" << i << " is set to false" << std::endl; }
		}
	}

	void printcapabilities() const {

		for (int i = 0; i < 3; i++) {

			if (capabilities[i] == true) { std::cout << "Capabilities flag " << i << " is set to true" << std::endl; }
			else { std::cout << "Capabilities flag " << i << " is set to false" << std::endl; }
		}
	}

	void operator==(const Player &player2) const {

		if (strcmp(name, player2.name) == 0) {

			std::cout << "Yes, they are equal" << std::endl;
		}

		else {

			std::cout << "No, they aren't equal" << std::endl;
		}
	}

	void useItem(Item &item) {

		if (strcmp(item.stringItem, "One_Up") == 0) {

			lifes++;
		}
		
		if (strcmp(item.stringItem, "Mini_Mario") == 0) {

			capabilities[0] = true;
			capabilities[1] = false;
			capabilities[2] = false;
		}

		if (strcmp(item.stringItem, "Super_Mario") == 0) {

			capabilities[0] = false;
			capabilities[1] = false;
			capabilities[2] = true;
		}

		if (strcmp(item.stringItem, "Fire_Flower") == 0) {

			weapon[0] = true;
			weapon[1] = false;
			weapon[2] = false;
		}

		if (strcmp(item.stringItem, "Ice_Flower") == 0) {

			weapon[0] = false;
			weapon[1] = true;
			weapon[2] = false;
		}

		if (strcmp(item.stringItem, "Golden_Flower") == 0) {

			weapon[0] = false;
			weapon[1] = false;
			weapon[2] = true;
		}
	}

	friend void starTouched(Player &player);
};