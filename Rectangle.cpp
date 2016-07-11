// file Rectangle.cpp

#include "stdafx.h"

Rectangle::Rectangle(string handle, double l, double w)
	: Polygon(handle), length(l), width(w)
{}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::area() // return the area of this rectangle
{
	return width*length;
}

double Rectangle::perimeter() // return the perimeter of this rectangle
{
	return 2*(width+length);
}

void Rectangle::print()
{
	cout << "RECTANGLE: ";
	Polygon::print ();
	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Area = " << area() << endl;
	cout << "Perimeter = " << perimeter() << endl;
}
// print data in this format, using the base class print method to print the name
// RECTANGLE name
// Length = length
// Width = width
// Area = area()
// Perimeter = perimeter()

// NOTE:  This requires printing RECTANGLE in this derived class method
// Then invoking the base class print method to print the name
// Then finishing the print method in this derived class to print the rest of the information
