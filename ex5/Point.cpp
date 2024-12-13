#include "Point.h"
#include "cmath"

Point::Point()
{
	_x = 0;
	_y = 0;
}

Point::Point(double x, double y)
{
	_x = x;
	_y = y;
}

Point::~Point()
{
	
}

Point Point::operator+(const Point& other) const
{
	Point p(_x + other._x, _y + other._y);
	return p;

}

Point& Point::operator+=(const Point& other)
{
	Point p(_x + other._x, _y + other._x);
	return p;
}

double Point::getX() const
{
	return _x;
}

double Point::getY() const
{
	return _y;
}

double Point::distance(const Point& other) const
{
	return std::sqrt(std::pow((other.getX() - _x), 2) + std::pow((other.getY() - _y), 2));
}







