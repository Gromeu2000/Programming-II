#include <iostream>

class Module {

private:

	unsigned short numIterations;
	const char *name;

public:

	Module(const char *nm, unsigned short Iterations) :

		numIterations(Iterations),
		name(nm)
	{}

	void update(unsigned short currentIteration) {

		if (currentIteration < numIterations) {

			std::cout << name << std::endl;
		}
	}
};

int main() {

	Module modules[3] = {

		Module("Input", 3),
		Module("Render", 7),
		Module("Logic", 10)
	};

	for (unsigned short i = 0; i < 10; i++) {

		std::cout << "--Iteration number: " << i << std::endl;

		for (int j = 0; j < 3; j++) {

			modules[j].update(i);
		}

		std::cout << std::endl;
	}

	system("pause");
	return 0;
}