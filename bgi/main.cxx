#include "graphics.h"
#include <iostream>

void concentric_circles(int level, int x, int y, int radius) {

	if (level < 5) {
		
		circle(x, y, radius);

		concentric_circles(level + 1, x - (radius - radius * 0.41f), y, radius* 0.41f);
		concentric_circles(level + 1, x + (radius - radius * 0.41f), y, radius* 0.41f);
		concentric_circles(level + 1, x, y + (radius - radius * 0.41f), radius* 0.41f);
		concentric_circles(level + 1, x, y - (radius - radius * 0.41f), radius* 0.41f);
	}
}

struct point2d {

	float x;
	float y;
};

void triangle(const point2d &a, const point2d &b, const point2d &c) {

	std::cout << "hello" << std::endl;
}

void sierpinski_triangle(int a, int b, int c, int level) {

	if (level < 6) {

		triangle(a, b, c);
	}
}

void main()
{
	
	//Basic drawing functions.
	void putpixel(int x, int y, int color);
	void line(int x1, int y1, int x2, int y2);
	void rectangle(int left, int top, int right, int bottom);
	void circle(int x, int y, int radius);
	

	initwindow(1000, 1000, "Graphics");
	initwindow(1000, 1000, "Graphics");

	int level = 0;
	concentric_circles(level, 500, 500, 400);

	system("pause");
}
