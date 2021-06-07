#include <iostream>

using namespace std;

class Equilateral {
public:
	int l;
	Equilateral(int l)
	{
		this->l = l;
	}
	virtual int perimeter()
	{
		return 3 * l;
	}
	virtual float aria()
	{
		return sqrt(3) / 4 * (l * l);
	}
};

class Isosceles: public Equilateral {
public:
	int l2;
	Isosceles(int l, int l2) : Equilateral(l)
	{
		this->l2 = l2;
	}
	int perimeter()
	{
		return l + l + l2;
	}

	float aria()
	{
		float h = sqrt(pow(l, 2) - (pow(l2, 2) / 4));
		return (l2*h)/2;
	}
};

class Triangle : public Isosceles {
public:
	int l3;
	Triangle(int L, int L2,int L3) : Isosceles(L,L2)
	{
		l3 = L3;
	}
	int perimeter()
	{
		return l+l2+l3;
	}

	float aria()
	{
		float s = perimeter() / 2.00;
		return sqrt((s * (s - l)) * (s - l2) * (s - l3));
	}

};

void write(Equilateral* p)
{
	cout << "Perimeter: " << p->perimeter() << endl;
	cout << "Aria: " << p->aria() << endl;
}
int main()
{
	Equilateral eq(5);
	Isosceles es(5, 8);
	Triangle tr(5, 6, 7);
	write(&eq);
	write(&es);
	write(&tr);
	return 0;
}