#pragma once
#include "Polygon.h"


namespace myShapes
{
	// Calling it MyRectangle becuase Rectangle is taken by global namespace.
	class Rectangle : public Polygon
	{
	public:

		// Constructor
		// There's a need only for the top left corner 
		Rectangle(const Point& a, double length, double width, const std::string& type, const std::string& name);

		// Destructor
		~Rectangle();

		// Methods
		void draw(const Canvas& canvas) override;
		void clearDraw(const Canvas& canvas) override;

		// override functions if need (virtual + pure virtual)
		double getArea() const override;
		double getPerimeter() const override;
		// Add Fields if necessary

	private:
		double _width;
		double _length;
	};
}