#pragma once
#include <iostream>
#include <string.h>

class Pokemon {

protected:
	char name[25];
	char type[25];

public:
	Pokemon(const char* nameP) {

		strcpy_s(name, nameP);
		strcpy_s(type, "noType");
	}

	virtual const char *getName() const { return name; }
	virtual const char *getType() const { return type; }
	virtual int damageAttack(Pokemon *pokemon) = 0;
};