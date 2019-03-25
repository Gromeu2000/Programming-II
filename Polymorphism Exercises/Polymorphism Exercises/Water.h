#pragma once
#include <iostream>
#include <string.h>
#include "Pokemon.h"
#include "Electric.h"
#include "Grass.h"
#include "Fire.h"

class WaterPokemon : public Pokemon{

public:
	WaterPokemon(const char* nameP) : Pokemon(nameP) {

		strcpy_s(type, "Water Type");
	}

	int damageAttack(Pokemon *Pokemon) override {

		int damage = 10;
		if (strcmp((*Pokemon).getType(), "Fire Type") == 0) { damage *= 2; }
		if (strcmp((*Pokemon).getType(), "Grass Type") == 0) { damage *= 0.5; }
		return damage;
	}
};