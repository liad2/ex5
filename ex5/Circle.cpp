#include "Circle.h"
#include <iostream>


Circle::Circle(const Point& center, double radius, const std::string& type, const std::string& name) :
	Shape(name , type)
{
	if (radius < 0) {
		std::cerr << "invalid radius" << std::endl;
		exit(1);
	}
	_radius = radius;
	_center = center;
}

Circle::~Circle()
{

}

Point Circle::getCenter() const
{
	return _center;
}

double Circle::getRadius() const
{
	return _radius;
}

void Circle::draw(const Canvas& canvas)
{
	canvas.draw_circle(getCenter(), getRadius());
}

void Circle::clearDraw(const Canvas& canvas)
{
	canvas.clear_circle(getCenter(), getRadius());
}

void Circle::move(Point other)
{
	_center += other;
}

double Circle::getArea() const
{
	return _radius * PI * _radius;
}

double Circle::getPerimeter() const
{
	return _radius * 2 * PI;
}


