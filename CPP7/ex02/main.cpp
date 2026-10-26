#include <iostream>
#include <exception>
#include "Array.hpp"
 
int main()
{
	// Empty array
	Array<int> empty;
	std::cout << "empty size: " << empty.size() << std::endl;
 
	// Array of n elements, default initialized
	Array<int> a(5);
	std::cout << "a size: " << a.size() << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
 
	// Subscript operator
	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i * 10;
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << "a[" << i << "] = " << a[i] << std::endl;
 
	// Copy constructor: original and copy are independent
	Array<int> b(a);
	b[0] = 42;
	std::cout << "a[0] = " << a[0] << ", b[0] = " << b[0] << std::endl;
 
	// Assignment operator: original and copy are independent
	Array<int> c;
	c = a;
	a[1] = 99;
	std::cout << "a[1] = " << a[1] << ", c[1] = " << c[1] << std::endl;
 
	// Out of bounds access throws an std::exception
	try
	{
		a[5] = 0;
	}
	catch (const std::exception &e)
	{
		std::cout << "exception caught: " << e.what() << std::endl;
	}
	try
	{
		a[-1] = 0;
	}
	catch (const std::exception &e)
	{
		std::cout << "exception caught: " << e.what() << std::endl;
	}

	return 0;
}