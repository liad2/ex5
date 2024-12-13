#include "Triangle.h"
#include <iostream>

Triangle::Triangle(const Point& a, const Point& b, const Point& c, const std::string& type, const std::string& name):
Polygon(type , name)
{
	if (points_on_same_line(a,b,c)) {
		std::cerr << "invalid points" << std::endl;
		exit(1);
	}
	_points.resize(3);
	_points[0] = a;
	_points[1] = b;
	_points[2] = c;
}

Triangle::~Triangle()
{
}

void Triangle::draw(const Canvas& canvas)
{
	canvas.draw_triangle(_points[0], _points[1], _points[2]);
}

void Triangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_triangle(_points[0], _points[1], _points[2]);
}

double Triangle::getArea() const
{
	double area = _points[0].getX() * (_points[1].getY() - _points[2].getY()) 
		+ _points[1].getX() * (_points[2].getY() - _points[0].getY())
		+ _points[2].getX() * (_points[0].getY() - _points[2].getY());
	return area;
}

double Triangle::getPerimeter() const
{
	return _points[0].distance(_points[1]) + _points[1].distance(_points[2]) + _points[2].distance(_points[0]);
}

bool Triangle::points_on_same_line(const Point& a, const Point& b, const Point& c)
{
	double area = a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY());
	return (area == 0);

}

