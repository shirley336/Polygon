// file Polygon.cpp

#include "stdafx.h"

Polygon::Polygon(string handle)
	: name(handle)
{}

string Polygon::getName() const
{
	return name;
}

void Polygon::print()
{
	cout << name << endl;
}
