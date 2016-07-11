// file Polygon.h

#include <string>
using namespace std;

class Polygon
{
private:
	string name;
public:
	Polygon(string handle);
	string getName() const;
	virtual double area() = 0; // make this a pure virtual method
	virtual double perimeter() = 0; // make this a pure virtual method
	virtual void print(); // make this a virtual method (but not a pure virtual method)
};
//
