#pragma once
#include "Shape.h"
#include "Canvas.h"
#include <vector>

class Menu
{
public:

	Menu(std::vector<Shape>& shapes);
	~Menu();

	// more functions..
	void main_menu();

private: 
	Canvas _canvas;
	// define a vector that contains the shapes

	std::vector<Shape>& _shapes;

	static void print_main_menu();
	static void print_add_new_shape_menu();

	void add_new_shape();
	void modify_or_get_shape_information();
	void delete_all_shapes();

	void add_circle();
	void add_arrow();
	void add_triangle();
	void add_rectangle();
	void move_shape(int shape_index);
	void shape_details(int shape_index) const;
	void remove_shape(int shape_index);
};

