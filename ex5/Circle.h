#pragma once

#include "Shape.h"
#include "Point.h"

#define PI 3.14

class Circle : public Shape
{
public:

	// Constructor
	Circle(const Point& center, double radius, const std::string& type, const std::string& name);

	// Destructor
	~Circle();

	// Getters
	Point getCenter() const;
	double getRadius() const;

	// Methods
	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;
	void move(Point other) override;
	double getArea() const override;
	double getPerimeter() const override;

private:
	Point _center;
	double _radius;
	// add fields
	// override functions if need (virtual + pure virtual)


};