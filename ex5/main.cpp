#include "Menu.h"
#include <vector>

int main()
{

	std::vector<Shape> shapes;

	Menu menu(shapes);
	menu.main_menu();
	
	return 0;
}