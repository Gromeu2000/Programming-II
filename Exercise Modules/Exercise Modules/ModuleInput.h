#pragma once
#include "Module.h"
#include <iostream>

class ModuleInput : public Module {

public:
	ModuleInput(const char *nameP) : Module(nameP) {};

	void start() override { std::cout << " -Start()" << name << std::endl; }
	void update() override { std::cout << " -Update()" << name << std::endl; }
	void stop() override { std::cout << " -Stop()" << name << std::endl; }
}; 