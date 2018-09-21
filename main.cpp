// app.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

int main()
{
	std::cout << "Hello World!" << std::endl;
	std::string x;
	getline(std::cin,x);
	std::cout << x << std::endl;


	return 0;
}
