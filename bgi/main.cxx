#include "graphics.h"
#include <iostream>

void cantor(int depth, float x1, float x2, float y)
{
	if (depth < 7)
	{
		line(x1, y, x2, y);
		int width = (x2 - x1) / 3;
		cantor(depth + 1, x1, x1 + width, y + 100);
		cantor(depth + 1, x1 + 2 * width, x2, y + 100);
	}
}

void concentric_circles(int level, int x, int y, int radius) {

	if (level < 5) {
		
		circle(x, y, radius);

		concentric_circles(level + 1, x - (radius - radius * 0.41f), y, radius* 0.41f);
		concentric_circles(level + 1, x + (radius - radius * 0.41f), y, radius* 0.41f);
		concentric_circles(level + 1, x, y + (radius - radius * 0.41f), radius* 0.41f);
		concentric_circles(level + 1, x, y - (radius - radius * 0.41f), radius* 0.41f);
	}
}

struct vec2 {

	float x;
	float y;
	vec2() : x(0), y(0) {}
	vec2(float X, float Y) :x(X), y(Y) {}
	
};

vec2 operator+(const vec2 &a, const vec2 &b) { return vec2(a.x + b.x, a.y + b.y); }
vec2 operator-(const vec2 &a, const vec2 &b) { return vec2(a.x - b.x, a.y - b.y); }
vec2 operator-(const vec2 &b) { return vec2(-b.x, -b.y); }
vec2 operator*(float v, const vec2 &a) { return vec2(a.x * v, a.y * v); }
vec2 operator*(const vec2 &a, float v) { return vec2(a.x * v, a.y * v); }
vec2 operator/(const vec2 &a, float v) { return vec2(a.x / v, a.y / v); }
float dot(const vec2 &a, const vec2 &b) { return a.x * b.x + a.y * b.y; }
float length(const vec2 &v) { return sqrt(dot(v, v)); }
vec2 perpendicular(const vec2 &v) { return vec2(v.y, -v.x); }
vec2 normalize(const vec2 &v) { return v / length(v); }



void triangle(const vec2 &a, const vec2 &b, const vec2 &c)
{
	line(a.x, a.y, b.x, b.y);
	line(b.x, b.y, c.x, c.y);
	line(c.x, c.y, a.x, a.y);
}

void sierpinski(int depth, const vec2 &bottomLeft, const vec2 &bottomRight, const vec2 &top)
{
	if (depth < 7)
	{
		const vec2 a(0.5*(bottomLeft + top));
		const vec2 b(0.5*(top + bottomRight));
		const vec2 c(0.5*(bottomLeft + bottomRight));
		triangle(a, b, c);
		sierpinski(depth + 1, bottomLeft, c, a);
		/*sierpinski(depth + 1, c, bottomRight, b);
		sierpinski(depth + 1, a, b, top);*/
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
	//cantor(0, 10, 900, 100);
	//concentric_circles(0, 500, 500, 400);
	const vec2 bottomLeft(100, 1000 - 100);
	const vec2 bottomRight(900, 1000 - 100);
	const vec2 top(500, 1000 - 770);
	triangle(bottomLeft, bottomRight, top);
	sierpinski(0, bottomLeft, bottomRight, top);
	system("pause");
}
