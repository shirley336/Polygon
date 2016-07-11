// file Rectangle.h

#include <string>
using namespace std;

class Rectangle : public Polygon
{
private:
	double length;
	double width;
public:
	Rectangle(string handle, double l, double w);
	double getLength() const;
	double getWidth() const;
	double area(); // the virtual area method will be implemented in this class
	double perimeter(); // the virtual perimeter method will be implemented in this class
	void print(); // this class will override the base class print method
};
