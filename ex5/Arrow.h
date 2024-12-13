#pragma once
#include "Shape.h"

class Arrow : public Shape
{
public:

	// Constructor
	Arrow(const Point& a, const Point& b,const std::string& type,const std::string& name);

	// Destructor
	~Arrow();

	// Getters
	Point getSource() const;
	Point getDestination() const;
	double getArea() const override;
	double getPerimeter() const override;
	// Methods

	// override functions if need (virtual + pure virtual)
	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;
	void move(Point other) override;

private:
	Point _source;
	Point _destination;
};