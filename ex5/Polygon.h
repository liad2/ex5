#pragma once

#include "Shape.h"
#include <vector>

class Polygon : public Shape
{
public:

	// Constructor
	Polygon(const std::string& type,const std::string& name);

	// Destructor
	~Polygon();

	// Methods

	// Getters
	std::vector<Point> getPoints() const;

	// override functions if need (virtual + pure virtual)
	void move(Point other) override;

protected:
	std::vector<Point> _points;
};