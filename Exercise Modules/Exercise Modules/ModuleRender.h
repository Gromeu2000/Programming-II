#pragma once
#include "Module.h"
#include <iostream>

class ModuleRender :public Module {

public:
	ModuleRender(const char *nameP) : Module(nameP) {};

	void start() override { std::cout << " -Start()" << name << std::endl; }
	void update() override { std::cout << " -Update()" << name << std::endl; }
	void stop() override { std::cout << " -Stop()" << name << std::endl; }
};