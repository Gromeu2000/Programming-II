#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Electric.h"
#include "Grass.h"
#include "Fire.h"
#include "Water.h"

int main() {

	Pokemon* pikachu = new ElectricPokemon("Pikachu");
	Pokemon* bulbasaur = new GrassPokemon("Bulbasaur");
	Pokemon* charmander = new FirePokemon("Charmander");
	Pokemon* squirtle = new WaterPokemon("Squirtle");

	std::cout << "---Damage Attacks---" << std::endl;

	std::cout << pikachu->getName() << " -> " << bulbasaur->getName() << " = " << pikachu->damageAttack(bulbasaur) << " units\n";
	std::cout << bulbasaur->getName() << " -> " << squirtle->getName() << " = " << bulbasaur->damageAttack(squirtle) << " units\n";
	std::cout << squirtle->getName() << " -> " << charmander->getName() << " = " << squirtle->damageAttack(charmander) << " units\n";
	std::cout << charmander->getName() << " -> " << pikachu->getName() << " = " << charmander->damageAttack(pikachu) << " units\n";

	delete pikachu;
	delete bulbasaur;
	delete charmander;
	delete squirtle;

	system("pause");
	return 0;
}