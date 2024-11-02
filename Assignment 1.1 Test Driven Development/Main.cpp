/*
MS549 Data Structures and Testing
Jeff O'Hara
11-2-24

First program utilizing 3 menus, with the 3rd being the EXIT. Other 2 menus showcasing basic C++ features, within utilizing if/else statements
and both CPP and HEADER files together.
*/

// Include libraries
#include <iostream>
#include <cstdlib> // for seeding random srand()
#include <ctime> // for using time()
#include "functions.h" // header file

// Include the namespace std to ease coding
using namespace std;

int main()
{
	// create variables
	int choice;

	// Initialize random seed
	srand(static_cast<unsigned int>(time(0)));

	// Create do/while loop to generate menus for user
	do
	{
		cout << "\nMenu:" << endl;
		cout << "1. Generate a random number between 1 and 100" << endl;
		cout << "2. Check if a number is even or odd" << endl;
		cout << "3. Exit Program" << endl;
		cout << "Enter your choice: ";
		// Get user input
		cin >> choice;

		// create a switch loop for validation
		switch (choice)
		{
		case 1:
			function1();
			break;

		case 2:
			function2();
			break;

		case 3:
			exitProgram();
			break;

		default:
			cout << "Invalid choice! Please try again." << endl;
		}
	} while (choice != 3);
	
	return 0;
}
