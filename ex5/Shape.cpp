#include "Shape.h"
#include <iostream>

using std::cout;

Shape::Shape(const std::string& name, const std::string& type)
{
	
}

Shape::~Shape()
{

}

std::string Shape::getType() const
{
	return _type;
}

std::string Shape::getName() const
{
	return _name;
}

void Shape::printDetails() const
{
	cout << _type << "\t" << _name << "\t"  << getArea() << "\t" << getPerimeter()<< std::endl;
}


