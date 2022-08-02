#include <stdio.h>

#include <iostream>
#include <string>
int main(int argc, char* argv[])
{

	if (argc <= 1)
	{
		printf("No program arguments found.");
		return 0;
	}



	for (int index = 1; index < argc ; index++)
	{

		std::string argumentAsString = argv[index];
		std::cout << argumentAsString << std::endl;
	}



	return 0;
}