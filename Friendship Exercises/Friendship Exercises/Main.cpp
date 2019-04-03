#include <iostream>
#include <string.h>
#include "Player.h"
#include "Item.h"

void starTouched(Player &player) {

	player.invincible = true;
}

int main() {

	char name[25];
	char nameI[25];

	std::cout << "Insert a name: " << std::endl;
	std::cin >> name;
	std::cout << "Your name is " << name << std::endl;


	Player player{ name };
	

	std::cout << "Insert Item, Star or Quit" << std::endl;
	std::cin >> nameI;
	
	Item item{ nameI };

	if ((strcmp(nameI, "One Up") == 0) || (strcmp(nameI, "Mini Mario" ) == 0) || (strcmp(nameI, "Super Mario") == 0) || (strcmp(nameI, "Fire Flower") == 0) || (strcmp(nameI, "Ice Flower") == 0) || (strcmp(nameI, "Golden Flower") == 0)) {

		player.useItem(item);
	}

	if (strcmp(nameI, "Star") == 0) {

		starTouched(player);
		player.printNumLIfes();
		player.printInvincible();
		player.printcapabilities();
		player.printWeapon();
	}

	if (strcmp(nameI, "Quit") == 0) {

		return 0;
	}

	system("pause");
	return 0;
}