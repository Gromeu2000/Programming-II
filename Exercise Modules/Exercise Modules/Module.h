#pragma once
#include <string.h> 

class Module {

public:
	char name[25];

	Module(const char *nameP) {

		strcpy_s(name, nameP);
	}

	virtual void start() {};
	virtual void update() {};
	virtual void stop() {};
};