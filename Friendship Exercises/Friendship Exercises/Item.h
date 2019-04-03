#pragma once
#include "Player.h"
#include <iostream>
#include <string.h>

class Item {

private:
	char stringItem[25];

public:

	Item() {}

	Item(const char* nameP) {

		strcpy_s(stringItem, nameP);
	}

	~Item() {};

	friend class Player;
};