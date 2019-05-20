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

void sierpinski_triangle(point2d* a, point2d* b, point2d* c, int level) {

	point2d tempA, tempB, tempC;

	if (level < 6) {

		tempA.x = a->x; tempA.y = a->y;
		tempB.x = (a->x + b->x) / 2; tempB.y = (a->y + b->y) / 2;
		tempC.x = (a->x + c->x) / 2; tempC.y = (a->y + c->y) / 2;
		sierpinski_triangle(&tempA, &tempB, &tempC, level + 1);

		tempA.x = (a->x + b->x) / 2; tempA.y = (a->y + b->y) / 2;
		tempB.x = b->x; tempB.y = b->y;
		tempC.x = (c->x + b->x) / 2; tempC.y = (c->y + b->y) / 2;
		sierpinski_triangle(&tempA, &tempB, &tempC, level + 1);

		tempA.x = (a->x + c->x) / 2; tempA.y = (a->y + c->y) / 2;
		tempB.x = (c->x + b->x) / 2; tempB.y = (c->y + b->y) / 2;
		tempC.x = c->x; tempC.y = c->y;
		sierpinski_triangle(&tempA, &tempB, &tempC, level + 1);

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

	point2d* a;
	point2d* b;
	point2d* c;
	int level = 0;
	concentric_circles(level, 500, 500, 400);
	//sierpinski_triangle(a, b, c, level);

	system("pause");
}
