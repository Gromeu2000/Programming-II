#include <iostream>

class Point
{
private:
	int x, y; // data members
public:
	// Constructor
	Point() { std::cout << "constructor" << std::endl; }
	// Destructor
	~Point() {
		std::cout << "destructor"

			<< x << " " << y << std::endl;
	}

	int getx() const { return x; }
	int gety() const { return y; }
	void setx(int newx) { x = newx; }
	void sety(int newy) { y = newy; }

};

	int main()
	{
		{ // open scope
		// Object created in stack memory
			Point p1; // p1 constructor called here
			p1.setx(1);
			p1.sety(2);
		} // p1 destructor is called here
		// Object created in dynamic memory
		Point *p2 = new Point; // p2 ctor. called here
		p2->setx(3);
		p2->sety(4);
		delete p2; // p2 destructor called here

		system("pause");
		return 0;
	}