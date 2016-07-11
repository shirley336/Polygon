// file RightTriangle.h

#include <string>
using namespace std;

class RightTriangle : public Polygon
{
private:
	double base;
	double height;
public:
	RightTriangle(string handle, double b, double h);
	double getBase() const;
	double getHeight() const;
	double area(); // the virtual area method will be implemented in this class
	double perimeter(); // the virtual perimeter method will be implemented in this class
	void print(); // this class will override the base class print method
};
