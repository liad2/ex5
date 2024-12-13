#include "Rectangle.h"



myShapes::Rectangle::Rectangle(const Point& a, double length, double width, const std::string& type, const std::string& name):
	Polygon(type , name)
{
	/*
           3 +----------------+ 2
             |                |
             |                |
       (a) 0 +----------------+ 1

	*/
	_points.resize(4);
	_points[0] = a;
	_points[1] = Point(a.getX() + width, a.getY());
	_points[2] = Point(a.getX() + width, a.getY() + length);

	_length = length;
	_width = width;

}

myShapes::Rectangle::~Rectangle()
{
}

void myShapes::Rectangle::draw(const Canvas& canvas)
{
	canvas.draw_rectangle(_points[0], _points[1]);
}

void myShapes::Rectangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_rectangle(_points[0], _points[1]);
}

double myShapes::Rectangle::getArea() const
{
	return (_width * _length);
}

double myShapes::Rectangle::getPerimeter() const
{
	return (2 * _width + 2 * _length);
}


