#include <iostream>

struct Pirate {

	unsigned char name;
	int life;
};

struct Weapon {

	unsigned char name;
	int damage;
};

void printPirateInfo(const Pirate &p) {

	std::cout << "--- Pirate ---" << std::endl;
	std::cout << "name = " << p.name << std::endl;
	std::cout << "life = " << p.life << std::endl;
}

void printWeaponInfo(const Weapon &w) {

	std::cout << "--- Weapon ---" << std::endl;
	std::cout << "name = " << w.name << std::endl;
	std::cout << "life = " << w.damage << std::endl;

}

void attack(Pirate *leChuck, const Weapon &sword) {

	leChuck->life -= sword.damage;
}

void Ex2() {
	 
	Pirate leChuck;
	Weapon sword;

	attack(&leChuck, sword);

	printPirateInfo(leChuck);
	printWeaponInfo(sword);
}