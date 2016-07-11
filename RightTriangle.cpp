    // file RightTriangle.cpp

#include "stdafx.h"
#include <cmath>

RightTriangle::RightTriangle(string handle, double b, double h)
	: Polygon(handle), base(b), height(h)
{}

double RightTriangle::getBase() const
{
	return base;
}

double RightTriangle::getHeight() const
{
	return height;
}

double RightTriangle::area() // return the area of this right triangle
{
	return base*height/2;
}

double RightTriangle::perimeter() // return the perimeter of this right triangle
{
	double p = sqrt(base*base + height*height);
	return base+height+p;
}

void RightTriangle::print()
{
	cout << "RIGHT TRIANGLE: ";
	Polygon::print ();
	cout << "Base = " << base << endl;
	cout << "Height = " << height << endl;
	cout << "Area = " << area() << endl;
	cout << "Perimeter = " << perimeter() << endl;
}
// print data in this format, using the base class print method to print the name
// RIGHT TRIANGLE name
// Base = base
// Height = height
// Area = area()
// Perimeter = perimeter()

// NOTE:  This requires printing RIGHT TRIANGLE in this derived class method
// Then invoking the base class print method to print the name
// Then finishing the print method in this derived class to print the rest of the information
