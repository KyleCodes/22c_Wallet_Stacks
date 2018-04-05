////////////////////////////////////////////
// Menus.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Menus.h

#include "Menus.h"
using namespace std;

void Menus::displayDataType(int typeCheck)
{
	if (typeCheck == 1)
		cout << " Integer ";
	else if (typeCheck == 2)
		cout << " Double ";
	else if (typeCheck == 3)
		cout << " String ";
	else if (typeCheck == 4)
		cout << " Currency ";
}


void Menus::newLine(int times = 1)
{
	if (times == 1)
		cout << endl;
	else if (times > 1)
	{
		cout << endl;
		newLine(times - 1);
	}
	//else
	//{
	//	string exceptionString = "Wrong Number Entered for newLine\n";
	//	throw exceptionString;
	//}
}


void Menus::drawLine(int a)
{
	if (a == 1)
	{
		cout << "*****************************************************" << endl;
	}
	else if (a == 2)
	{
		cout << "_____________________________________________________" << endl;
	}
	else
	{
		string exceptionString = "Wrong Number Entered for rawLine\n";
		throw exceptionString;
	}
}

void Menus::drawStackImage(Stack<int> & intr, Stack<double> & doub, Stack<string> & str, Stack<Currency> & curr, int type)
{
	drawLine(1);
	cout << "             STACK VIEWER" << endl;
	drawLine(2);
	cout << endl;


	cout << "                       "; displayDataType(type); newLine();
	cout << "____________________________________________________|" << endl;
	cout << "|" << endl;
	cout << "|"; 
	if (type == 1)
		intr.Display();
	else if (type == 2)
		doub.Display();
	else if (type == 3)
		str.Display();
	else if (type == 4)
		curr.Display();
	cout << "|___________________________________________________" << endl;
	cout << "                                                    |" << endl;
	newLine(2);
	//cout << "____________________________________________________|" << endl;
	//cout << "|" << endl;
	//cout << "|"; doub.Display();
	//cout << "|___________________________________________________" << endl;
	//cout << "                      Double                        |" << endl;
	//newLine(2);
	//cout << "____________________________________________________|" << endl;
	//cout << "|" << endl;
	//cout << "|"; str.Display();
	//cout << "|___________________________________________________" << endl;
	//cout << "                      String                        |" << endl;
	//newLine(2);
	//cout << "____________________________________________________|" << endl;
	//cout << "|" << endl;
	//cout << "|"; curr.Display();
	//cout << "|___________________________________________________" << endl;
	//cout << "                      Currency                      |" << endl;
}

void Menus::displayStartMenu()
{
	drawLine(1);
	cout << "            Welcome to Josh and Kyle's " << endl;
	cout << "              demonstration of stacks " << endl;
	drawLine(2);
	newLine();
	cout << " Data Menu" << endl;
	cout << "	Select a data type to work with:				  " << endl;
	cout << "(This will remain selected until otherwise noted)	  " << endl;
	newLine();
	cout << "	1) Integer" << endl;
	cout << "	2) Double" << endl;
	cout << "	3) String" << endl;
	cout << "	4) Currency" << endl;
	newLine();
	cout << "	5) Quit Program" << endl;
	newLine(2);
	cout << "                  " << endl;
}




void Menus::displayMainMenu(int mMenuSelect, int dataType)
{
	if (mMenuSelect > 0 && mMenuSelect < 6)
	{
		if (mMenuSelect == 1) // START MENU
		{
			drawLine(1);
			cout << "         INITIALIZING STACK OBJECT" << endl;
			cout << "    You have selected the"; displayDataType(dataType); cout << "data type" << endl;
			drawLine(2);
			newLine();
			cout << "Choice Menu" << endl;
			cout << "Choose an Operation:" << endl;
			newLine();
			cout << "	1) Push" << endl;
			cout << "	2) Change Data Type" << endl;
			newLine();
		}
		else if (mMenuSelect == 2) // MAIN MENU
		{
			drawLine(1);
			cout << "             Last Operation Was Successful!" << endl;
			cout << "                        Select an option" << endl;
			drawLine(2);
			newLine();
			cout << "Choice Menu" << endl;
			cout << " 	Choose an Operation:" << endl;
			newLine();
			cout << "		1) Push" << endl;
			cout << "		2) Pop" << endl;
			cout << "		3) Change Data Type" << endl;
			cout << "       4) View "; displayDataType(dataType); cout << "Stack";
			cout << "		5) Empty Stack" << endl;
			newLine();
			cout << "		6) Quit Program" << endl;
			newLine(3);
		}
		else if (mMenuSelect == 2) // POP MENU
		{
			drawLine(1);
			//drawStackImage();
			drawLine(2);
			newLine();
			cout << "POP Menu" << endl;
			cout << "		Enter a Value to Pop:" << endl;
			newLine(6);
			cout << "               " << endl;
		}
		else if (mMenuSelect == 3) // PUSH MENU
		{
			drawLine(1);
			//drawStackImage();
			drawLine(2);
			newLine();
			cout << "POP Menu" << endl;
			cout << "		Enter a Value to Pop:" << endl;
			newLine(6);
			cout << "               " << endl;
		}
		else if (mMenuSelect == 4) // EMPTY MENU
		{
			drawLine(1);
			//drawStackImage();
			drawLine(2);
			newLine();
			cout << "POP Menu" << endl;
			cout << "		Are You sure you'd like to empty " << endl;
			cout << "					this stack?" << endl;
			newLine();
			cout << "		1) Yes" << endl;
			cout << "		2) No" << endl;
		}

		else if (mMenuSelect == 5) // SEARCH MENU EXECUTES BOOL TO SEE IF ITEM IS IN STACK
		{
			cout << "This Feature has not been implemented yet." << endl;
			//	drawline(1);
			//	drawStackImage();
			//	drawline(2);																				// SEARCH MENU
			//	newLine();
			//	cout << "Search Menu" << endl;
			//	cout << "		Are You sure you'd like to empty " << endl;
		}

		else if (mMenuSelect == 6)
		{
			return;
		}
	}
	else
	{
		string exceptionString = "Wrong Number Entered for mMenuSelect\n";
		throw exceptionString;
	}
}