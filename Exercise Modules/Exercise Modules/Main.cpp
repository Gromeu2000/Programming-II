#include <iostream>
#include "Application.h"
#include "Module.h"
#include "ModuleInput.h"
#include "ModuleLogic.h"
#include "ModuleRender.h"

int main() {

	Application *app = new Application;

	app->start();
	
	for (int i = 0; i < 3; i++) {

		app->update();
	}

	app->stop();

	delete app;

	system("pause");
	return 0;
}