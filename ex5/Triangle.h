#include "Polygon.h"
#include <string>

class Triangle : public Polygon
{
public:
	
	// Constructor
	Triangle(const Point& a, const Point& b, const Point& c, const std::string& type,const  std::string& name);

	// Destructor
	~Triangle();

	// Methods
	void draw(const Canvas& canvas) override;
	void clearDraw(const Canvas& canvas) override;

	// override functions if need (virtual + pure virtual)
	double getArea() const override;
	double getPerimeter() const override;

private:
	static bool points_on_same_line(const Point& a, const Point& b, const Point& c);


	
};