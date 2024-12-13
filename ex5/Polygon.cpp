#include "Polygon.h"

Polygon::Polygon(const std::string& type, const std::string& name) :
	Shape(name, type)
{
}

Polygon::~Polygon()
{
}

std::vector<Point> Polygon::getPoints() const
{
	return _points;
}

void Polygon::move(Point other)
{
	int i;
	for (i = 0; i < _points.size(); i++) {
		_points[i] += other;
	}
}
