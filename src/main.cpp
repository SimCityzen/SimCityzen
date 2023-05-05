#include <iostream>
#include "GLFW/glfw3.h"

void main()
{
	if(glfwInit())
	{
		std::cout << "Initialized\n";
		glfwTerminate();
	}
	else
	{
		std::cerr << "Error\n";
	}
}