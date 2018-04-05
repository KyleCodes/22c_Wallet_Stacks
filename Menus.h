////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//		MENUS CLASS
////////////////////////////////////////////
// Menu.h
////////////////////////////////////////////

#ifndef MENUS_H
#define MENUS_H
#include <iostream>
#include <string>
#include <iomanip>
#include "Stack.h"
#include "Currency.h"
using namespace std;

// 
// 

class Menus
{
public:
	// Drawing Resources
	void newLine(int);						// Custom Newline Function 
	void drawLine(int);						// Used for drawing lines to separate menu screens 
	void drawStackImage(Stack<int> &, Stack<double> &, Stack<string> &, Stack<Currency> & , int); // Stack<int>, Stack<double>, Stack<string>, Stack<Currency>);					// Displays visual represtnations of the 4 stacks
	void displayDataType(int);				// Displays the current data type 
	
	// Menu Display Functions 
	void displayStartMenu();			// Used for the initial startup screen of the program . takes bool to determine if stacks are empty or not, determining which screen to display 
	void displayMainMenu(int, int);				// Displays Each of the program's menus. takes int character to determine which screen to display
};


#endif