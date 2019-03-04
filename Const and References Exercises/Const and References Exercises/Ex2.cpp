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
	 
	Pirate leChuck{ "LeChuck", 100 };
	Weapon Sword{ "Imperial_Sword", 10 };
	

	printPirateInfo(leChuck);


	attack(&leChuck, Sword);

	printPirateInfo(leChuck);
}