#include <iostream>

struct Pirate {

	unsigned char name[30];
	int life;
};

struct Weapon {

	unsigned char name[30];
	int damage;
};

void printPirateInfo(const Pirate &p) {

	std::cout << "--- Pirate ---" << std::endl;
	std::cout << "Name = " << p.name << std::endl;
	std::cout << "Life = " << p.life << std::endl;
}

void printWeaponInfo(const Weapon &w) {

	std::cout << "--- Weapon ---" << std::endl;
	std::cout << "Name = " << w.name << std::endl;
	std::cout << "Life = " << w.damage << std::endl;
}

void attack(Pirate *Lechuk, Weapon &sword) {

	Lechuk->life -= sword.damage;
}

void Ex3() {

	Pirate pirate = { "LeChuck", 100 };
	Weapon sword = { "Aguja", 10 };

	printPirateInfo(pirate);
	printWeaponInfo(sword);

	attack(&pirate, sword);

	printPirateInfo(pirate);
}