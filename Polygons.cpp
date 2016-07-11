// Polygons.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
using namespace std;
#include <iostream>
//#include "Polygon.h"
//#include "Rectangle.h"
//#include "RightTriangle.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int number = 0;
	string name = " ";
	double length;
	double width;
	int c = 0;
	string another;
	double base;
	double height;
	// declare a vector of polygons
	// provide a menu of choices including rectangle, triangle, and quit
	// for a rectangle or a right triangle, prompt for and input the values needed by the constructor
	// then push back the polygon to the end of the polygon vector
	// then loop through the vector and invoke the print method, which will run in the derived class
	vector<Polygon*> polygon;

	while (c == 0)
	{
		cout << "1. Rectangle" << endl;
		cout << "2. Triangle " << endl;
		cout << "3. Quit" << endl;
		cout << "Enter Option number: " << endl;
		cin >> number;
		if (number == 1)
		{
			cout << "Name: " << endl;
			cin >> name;
			cout << "Length: " << endl;
			cin >> length;
			cout << "Width: " << endl;
			cin >> width;
			Rectangle* rectangle = new Rectangle(name, length, width);
			polygon.push_back(rectangle);
			
		}
		else if (number == 2)
		{
			cout << "Name: " << endl;
			cin >> name;
			cout << "Base: " << endl;
			cin >> base;
			cout << "Height: " << endl;
			cin >> height;
			RightTriangle* triangle = new RightTriangle(name, base, height);
			polygon.push_back(triangle);
		}
		else if (number == 3)
		{
			cout << "Bye!" << endl;
			c = 1;
		}
		else
		{
			cout << "This is not an option." << endl;
			c = 1;
		}
		cout << "Add another Polygon? (Yes or No)" << endl;
		cin >> another;
		if (another == "No")
		{
			for (int i = 0; i < polygon.size(); i++)
			{
				polygon[i]->print();
			}
			c = 1;
		}
	}
	system("pause");
	return 0;

}
