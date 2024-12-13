#include "Menu.h"
#include "Circle.h"
#include "Arrow.h"
#include "Triangle.h"
#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Menu::Menu(std::vector<Shape>& shapes) :
	_shapes(shapes)
{
	
}

Menu::~Menu()
{
}

void Menu::print_main_menu()
{
	cout << "Enter 0 to add a new shape." << endl;
	cout << "Enter 1 to modify or get information from a current shape." << endl;
	cout << "Enter 2 to delete all of the shapes." << endl;
	cout << "Enter 3 to exit." << endl;

}

void Menu::main_menu()
{
	bool quit = false;
	while (!quit) 
	{
		int sel = 0;
		print_main_menu();
		cin >> sel;
		switch (sel)
		{
		case 0:
			add_new_shape();
			//print_shape();
			//cin >> sel;
			//switch (sel) {
			//case 0:
			break;
		case 1:
			modify_or_get_shape_information();
			break;
		case 2:
			delete_all_shapes();
			break;
		case 3:
			quit = true;
			break;
		}
	}
}

void Menu::add_new_shape()
{
	bool quit = false;
	while (!quit)
	{
		int sel = 0;
		print_add_new_shape_menu();
		cin >> sel;
		switch (sel)
		{
		case 0:
			add_circle();
			break;
		case 1:
			add_arrow();
			break;
		case 2:
			add_triangle();
			break;
		case 3:
			add_rectangle();
			break;
		}
	}
}

void Menu::modify_or_get_shape_information()
{
	bool quit = false;

	while (!quit)
	{

		int i = 0;
		int sel = 0;
		int shape_index = 0;
		for (i = 0; i < _shapes.size(); i++) {
			cout << "Enter " << i << " for " << _shapes[i].getName() << "(" << _shapes[i].getType() << ")" << endl;
		}
		cin >> shape_index;
		if (shape_index >= _shapes.size() || shape_index < 0)
			continue;
		while (sel > 2 || sel < 0){
			cout << "Enter 0 to move the shape" << endl;
			cout << "Enter 1 to get its details." << endl;
			cout << "Enter 2 to remove the shape." << endl;
			cin >> sel;
		
			switch (sel) {
			case 0:
				move_shape(shape_index);
				break;
			case 1:
				shape_details(shape_index);
				break;
			case 2:
				remove_shape(shape_index);
				break;
			}
				

				
		}
		
		quit = true;
	}
}

void Menu::delete_all_shapes()
{
	_shapes.clear();
}

void Menu::print_add_new_shape_menu()
{
	cout << "Enter 0 to add a circle." << endl;
	cout << "Enter 1 to add an arrow." << endl;
	cout << "Enter 2 to add a triangle." << endl;
	cout << "Enter 3 to add a rectangle." << endl;
}

void Menu::add_circle()
{
	double x;
	double y;
	double radius;
	std::string name;

	cout << "Please enter X:" << endl;
	cin >> x;
	cout << "Please enter Y:" << endl;
	cin >> y;
	cout << "Please enter radius:" << endl;
	cin >> radius;
	cout << "Please enter the name of the shape:" << endl;
	cin >> name;

	Point center(x, y);
	Circle circle(center, radius, "Circle", name);

	_shapes.push_back(circle);
}

void Menu::add_arrow()
{
	double x1;
	double y1;
	double x2;
	double y2;
	std::string name;
	cout << "Enter the X of point number: 1" << endl;
	cin >> x1;
	cout << "Enter the Y of point number: 1" << endl;
	cin >> y1;
	cout << "Enter the X of point number: 2" << endl;
	cin >> x2;
	cout << "Enter the X of point number: 2" << endl;
	cin >> y2;
	cout << "Enter the name of the shape:" << endl;
	cin >> name;
	Point a(x1, y1);
	Point b(x2, y2);

	Arrow arrow(a , b , "Arrow" , name);
	_shapes.push_back(arrow);
}

void Menu::add_triangle()
{
	double x1;
	double y1;
	double x2;
	double y2;
	double x3;
	double y3;
	std::string name;
	cout << "Enter the X of point number: 1" << endl;
	cin >> x1;
	cout << "Enter the Y of point number: 1" << endl;
	cin >> y1;
	cout << "Enter the X of point number: 2" << endl;
	cin >> x2;
	cout << "Enter the X of point number: 2" << endl;
	cin >> y2;
	cout << "Enter the X of point number: 3" << endl;
	cin >> x3;
	cout << "Enter the Y of point number: 3" << endl;
	cin >> y3;
	cout << "Enter the name of the shape:" << endl;
	cin >> name;
	Point a(x1, y1);
	Point b(x2, y2);
	Point c(x3, y3);

	Triangle triangle(a, b, c, "Triangle", name);
	_shapes.push_back(triangle);

	
}

void Menu::add_rectangle()
{
	double x;
	double y;
	double length;
	double width;
	std::string name; 

	cout << "Enter the X of the to left corner:" << endl;
	cin >> x;
	cout << "Enter the Y of the to left corner:" << endl;
	cin >> y;
	cout << "Please enter the length of the shape:" << endl;
	cin >> length;
	cout << "Please enter the width of the shape:" << endl;
	cin >> width;
	cout << "Enter the name of the shape:" << endl;
	cin >> name;

	Point a(x, y);
	myShapes::Rectangle rectangle(a , length, width, "Rectangle", name);
	_shapes.push_back(rectangle);
}

void Menu::move_shape(int shape_index)
{


	double x;
	double y;
	cout << "Please enter the X moving scale:" << endl;
	cin >> x;
	cout << "Please enter the Y moving scale:" << endl;
	cin >> y;

	Point a(x, y);
	_shapes[shape_index].move(a);
}

void Menu::shape_details(int shape_index) const
{
	_shapes[shape_index].printDetails();
}

void Menu::remove_shape(int shape_index)
{
	_shapes.erase(_shapes.begin() + shape_index);
}

