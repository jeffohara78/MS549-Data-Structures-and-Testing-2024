// Header file for definitions of functions

// Libraries
#include <iostream>
#include <cstdlib> // for rand and srand functions
#include <ctime> // for time functions
#include "functions.h"

// use namespace std for ease of coding
using namespace std;

// create function 1
void function1()
{
	// generate and display a random number between 1 and 100
	int randomNumber = rand() % 100 + 1;
	// output to the user
	cout << "Function 1: Random number between 1 and 100 is " << randomNumber << endl;
}

// create function 2 
void function2()
{
	// ask user to input a number and determine if even or odd
	int number;

	// prompt user
	cout << "Function 2: Please enter an integer: ";
	cin >> number;

	// if/else to determine even or odd
	if (number % 2 == 0)
	{
		cout << "The number " << number << " is even." << endl;
	}
	else
	{
		cout << "The number " << number << " is odd" << endl;
	}
}

// exit program function
void exitProgram()
{
	cout << "Exiting the program..." << endl;
}