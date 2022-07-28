#include <stdio.h>

#include <iostream>
#include <string>

void printOddOrEven(int number)
{
	if (number % 2 == 0)
	{
		printf("EVEN");
	}
	else
	{
		printf("ODD");
	}
}

int main(int argc, char *argv[])
{
	int number;

	// What is this program expected to do?
	// - Shows whether an argument is an ODD or EVEN number.
	// How to launch it?
	// - Execute the binary and pass a parameter to it?
	// - E.g. Open CMD in bin/Debug or bin/Release
	//		  02_odd_even.exe 1		=> Output: ODD
	//		  02_odd_even.exe 2		=> Output: EVEN
	//		  02_odd_even.exe 		=> Output: No program arguments found.
	//		  02_odd_even.exe ABC   => Undefined output (do whatever).
	//		

	// Make sure there are some program arguments available.
	if (argc <= 1)
	{
		printf("No program arguments found.");
	}
	
	// TODO(Gusti): i don't know why this doesn't work, but someone please FIX it.
	// --------------- start

	// Get the first argument
	std::string argumentAsString = argv[1];
	const char* argumentAsCharArray = argumentAsString.c_str();

	//number = argv[1]; // No
	//should use atoi?
	// or std::stoi?
	try {
		number = std::stoi(argv[1]);
		printOddOrEven(number);
	}
	catch (std::exception e) {
		std::cout << "NAN";
	}
	//std::cout << argumentAsString << std::endl; // i think this should be removed

	// --------------- stop



	return 0;
}