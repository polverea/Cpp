#include <iostream>

using namespace std;


class Shape {

public:
	int side;
	Shape(int Side) {
		side = Side;
	}
	virtual int perimetrul() = 0;
	virtual float aria() = 0;
	void write()
	{
		cout << "Perimetrul este: " << perimetrul() << endl;
		cout << "Aria este: " << aria() << endl;
	}
};

class Triangle : public Shape
{
public: 
	Triangle(int side) : Shape(side) {}
	int perimetrul(){
		return 3*side;
	}

	float aria()
	{
		return sqrt(3) / 4 * (side * side);
	}

};

class Square : public Shape
{
public:
	Square(int side) : Shape(side) {}
	int perimetrul() {
		return 4*side;
	}

	float aria()
	{
		return side * side;
	}
};

class Hexagon : public Shape
{
public:
	Hexagon(int side) : Shape(side) {}
	int perimetrul() {
		return 6*side;
	}

	float aria()
	{
		return (3 * sqrt(3)) / 2 * (side * side);
	}

};

int main()
{ 
	Triangle tr(5);
	tr.write();
	Square sq(5);
	sq.write();
	Hexagon he(5);
	he.write();
	return 0;
}