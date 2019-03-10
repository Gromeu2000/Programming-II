#include <iostream>
#include <math.h>

#if 0
class Pixel {

public:
	int red;
	int green;
	int blue;

	Pixel(){ }

	Pixel(int red, int green, int blue): red(0), green(0), blue(0) {}

	int mix(Pixel pixel1) {

		
	}
};

int main() {

	Pixel black;
	Pixel blue(0, 0, 255);
	Pixel red(255, 0, 0);
	Pixel mixed = red.mix(blue);

	std::cout << black.red() << " " << black.green() << " " << black.blue << std::endl;
	std::cout << mixed.red() << " " << mixed.green() << " " << mixed.blue << std::endl;
}
#endif

#if 0
class Clock {

private:
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;

public:

	Clock(){ }

	Clock(int hours, int minutes, int seconds) : hours(0), minutes(0), seconds(0) { }

	void getHours(Clock clock1, Clock clock2) {

		std::cout << "Please insert an hour for clock 1 (0 - 23): " << std::endl;
		std::cin >> clock1.hours;
		std::cout << "Please insert a minute for clock 1 (0 - 59): " << std::endl;
		std::cin >> clock1.minutes;
		std::cout << "Please insert a second for clock 1 (0 - 59): " << std::endl;
		std::cin >> clock1.seconds;

		std::cout << "Please insert an hour for clock 2 (0 - 23): " << std::endl;
		std::cin >> clock2.hours;
		std::cout << "Please insert a minute for clock 2 (0 - 59): " << std::endl;
		std::cin >> clock2.minutes;
		std::cout << "Please insert a second for clock 2 (0 - 59): " << std::endl;
		std::cin >> clock2.seconds;
	}

	void equalClocks(Clock clock1, Clock clock2) {

		if (clock1.hours == clock2.hours && clock1.hours == clock2.minutes && clock1.seconds == clock2.seconds) {

			std::cout << "Clocks are equal" << std::endl;
		}
		else {

			std::cout << "Clocks are not equal" << std::endl;
		}
	}

	void fastClock(Clock clock1, Clock clock2) {

		if (clock1.hours > clock2.hours) {

			std::cout << "Clock1 shows a time after" << std::endl;
		}

		if (clock1.hours < clock2.hours) {

			std::cout << "Clock2 shows a time after" << std::endl;
		}

		if (clock1.hours == clock2.hours) {

			if (clock1.minutes > clock2.minutes) {

				std::cout << "Clock1 shows a time after" << std::endl;
			}

			if (clock1.minutes < clock2.minutes) {

				std::cout << "Clock2 shows a time after" << std::endl;
			}

			if (clock1.minutes == clock2.minutes) {

				if (clock1.seconds > clock2.seconds) {

					std::cout << "Clock1 shows a time after" << std::endl;
				}

				if (clock1.seconds < clock2.seconds) {

					std::cout << "Clock2 shows a time after" << std::endl;
				}

				if (clock1.seconds == clock2.seconds) {

					std::cout << "Clock1 and clock2 have the same time" << std::endl;
				}
			}
		}
	}

	void setTime(unsigned char *h, unsigned char *min, unsigned char *sec) {


	}

	void printTime(Clock clock1, Clock clock2) {

		std::cout << clock1.hours << ":" << clock1.minutes << ":" << clock1.seconds << std::endl;
		std::cout << clock2.hours << ":" << clock2.minutes << ":" << clock2.seconds << std::endl;
	}
};

int main() {

	Clock clock(0, 0, 0);
	Clock clock1(12, 34, 32);
	Clock clock2(12,34, 12);

	clock.getHours(clock1, clock2);
	clock.equalClocks(clock1, clock2);
	clock.fastClock(clock1, clock2);
	clock.printTime(clock1, clock2);

	system("pause");
	return 0;
}
#endif

#if 0
class Vec3 {

public:
	int x;
	int y;
	int z;

	Vec3() { }
	Vec3(int x, int y, int z): x(0), y(0), z(0) { }
	Vec3(const Vec3 &v2) { x = v2.x; y = v2.y; z = v2.z; }

	int length(Vec3 vec) {

		vec.x *= vec.x;
		vec.y *= vec.y;
		vec.z *= vec.z;
		int vecS = vec.x + vec.y + vec.z;
		int vecF = sqrtf(vecS);

		return vecF;
	}

	int inverse(Vec3 vec) {

		
	}
};

int dot(Vec3 vec1, Vec3 vec2) {

	int vecdot = vec1.x * vec2.x + vec1.y * vec2.y + vec1.z * vec2.z;

	return vecdot;
}

int main() {

	Vec3 vector = { 2, 2, 2 };
	Vec3 vector2 = { 3, 3, 3 };

	system("pause");
	return 0;
}
#endif


#if 0
class Module {

private:

	const char *name;
	int numIterations;

public:
	Module(const char *nm, int iterations):

		name(nm),
		numIterations(iterations)
	{}

	void update(int currentIteration) {

		if (currentIteration < numIterations) {

			std::cout << name << std::endl;
		}
	}
};

int main() {

	Module modules[3] = {
		Module("Input", 5),
		Module("Render", 7),
		Module("Logic", 10)

	};

	for (int i = 0; i < 10; i++) {

		std::cout << "--Iteration: " << i << std::endl;

		for (int j = 0; j < 3; j++) {

			modules[j].update(i);
		}

		std::cout << std::endl;
	}

	system("pause");
	return 0;
}
#endif