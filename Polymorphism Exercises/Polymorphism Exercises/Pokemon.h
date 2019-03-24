#pragma once
#include <iostream>
#include <string.h>

class Pokemon {

protected:
	char name[35];
	char type[15];

public:
	Pokemon(const char* nameP, const char* typeP){
	
		strcpy_s(name, nameP);
		typeP = "noType";
		strcpy_s(type, typeP);

	}

	virtual char getName() const { return *name; }
	virtual char getType() const { return *type; }
};