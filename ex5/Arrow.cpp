#include "Arrow.h"

Arrow::Arrow(const Point& a, const Point& b, const std::string& type, const std::string& name) :
	Shape(name, type)
{
	_source = a;
	_destination = b;
}

Arrow::~Arrow()
{
}

Point Arrow::getSource() const
{
	return _source;
}

Point Arrow::getDestination() const
{
	return _destination;
}

double Arrow::getArea() const
{
	return 0.0;
}

double Arrow::getPerimeter() const
{
	return _source.distance(_destination);
}

void Arrow::draw(const Canvas& canvas)
{
	canvas.draw_arrow(_source, _destination);
}
void Arrow::clearDraw(const Canvas& canvas)
{
	canvas.clear_arrow(_source, _destination);
}

void Arrow::move(Point other)
{
	_source += other;
	_destination += other;
}
