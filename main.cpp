#include<iostream>
#include"Array.h"

int main(int argc, char* argv) {
	std::cout << "Hello World" << std::endl;

	Array<int, 5> array;

	std::cout << array.size() << std::endl;

	for (size_t i = 0; i < array.size(); i++)
	{
		array[i] = i;
	}
	for (size_t i = 0; i < array.size(); i++)
	{
		std::cout << array[i] << std::endl;
	}

	return 0;
}
