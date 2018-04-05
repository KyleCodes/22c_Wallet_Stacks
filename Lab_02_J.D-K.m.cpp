////////////////////////////////////////////
//				Jasraj Dhudwal
//				Kyle Muldoon
//				CIS 22C Lab_02
////////////////////////////////////////////



////////////////////////////////////////////
//		MAIN FILE
////////////////////////////////////////////
// Lab_02_JD-KM.cpp
////////////////////////////////////////////
//
//
//

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include "Node.h"
#include "Stack.h"
#include "Currency.h"
#include "Menus.h"
using namespace std;

// FUNCTION PROTOTYPES

//void changeDataType(Stack<string>obj1, Menus & obj2)
//{
//	bool test = obj1.isEmpty();
//
//	obj2.displayStartMenu(test);
//}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	Menus menu;
	Currency wallet;
	Stack<string> stackString;
	Stack<int> stackInt;											// Initializes each of the different stacks
	Stack<double> stackDouble;
	Stack<Currency> stackCurrency;

	int dataTypeSelect;												// initializes variable that determine data type being used
	int menuSelect;													// initializes variables used in menus
	bool isEmptyResult;												// used for testing if stack is empty
	
	ostringstream oss;
	int whl;
	int frac;
	int tempval;
	Currency temp;
	string dollarsCents;

	int pushInt;
	double pushDouble;												// temporary values used to push onto stack
	string pushString;


mainMenu:

	menu.displayStartMenu();
	do
	{
		cin >> dataTypeSelect;										// do while loop gathers data type input and provides validdation 
		if (dataTypeSelect < 1 || dataTypeSelect > 5 || cin.fail())
		{
			cout << "Invalid Entry. Try again." << endl;
			cout << "          ";
		}
	} while (dataTypeSelect < 1 || dataTypeSelect > 5 || cin.fail());

	menuSelect = 1;													// ensures start menu will be selected, regardless of data type selected
	menu.displayMainMenu(menuSelect, dataTypeSelect);								// Displays start menu defined in displayMainMenu case 1

	do
	{
		cin >> menuSelect;											// do while loop gathers data type input and provides validdation 
		if (menuSelect < 1 || menuSelect > 3)
		{
			cout << "Invalid Entry. Try again." << endl;
			cout << "          ";
		}
	} while (menuSelect < 1 || menuSelect > 3);

	switch (menuSelect)												// Switch statement handles menu selection 
	{
		// PUSH	
	case 1:															// Case 1 gets uder input and pushes tha value
	{
		if (dataTypeSelect == 1)
		{
			cout << "How many Integer items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cin >> pushInt;
				stackInt.push(pushInt);
			}
		}
		else if (dataTypeSelect == 2)
		{
			cout << "How many Double items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cin >> pushDouble;
				stackDouble.push(pushDouble);
			}
		}
		else if (dataTypeSelect == 3)
		{
			cout << "How many String items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cin >> pushString;
				stackString.push(pushString);
			}
		}
		else
		{
			cout << "How many Currency items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cout << "Enter the amount of Dollars: ";
				cin >> whl;
				wallet.setWhlParts(whl);
				cout << "   Enter the amount of Cents:   ";
				cin >> frac;
				wallet.setFracParts(frac);
			
				stackCurrency.push(wallet);
			}
		}
	}

	// CHANGE DATA TYPE
	case 2:
	{
		goto mainMenu;
	}

	}

	menuSelect = 2;
	menu.displayMainMenu(menuSelect, dataTypeSelect);

	do
	{
		cin >> menuSelect;										// do while loop gathers data type input and provides validdation 
		if (menuSelect < 1 || menuSelect > 6 || cin.fail())
		{
			cout << "Invalid Entry. Try again." << endl;
			cout << "          ";
		}
	} while (menuSelect < 1 || menuSelect > 6 || cin.fail());

	switch (menuSelect)
	{
	case 1:
	{
		if (dataTypeSelect == 1)
		{
			cout << "How many Integer items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cin >> pushInt;
				stackInt.push(pushInt);
			}
		}
		else if (dataTypeSelect == 2)
		{
			cout << "How many Double items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cin >> pushDouble;
				stackDouble.push(pushDouble);
			}
		}
		else if (dataTypeSelect == 3)
		{
			cout << "How many String items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cin >> pushString;
				stackString.push(pushString);
			}
		}
		else
		{
			cout << "How many Currency items would you like to Push? ";
			cin >> tempval;
			for (int i = 0; i < tempval; i++)
			{
				int temp = i;
				cout << temp + 1 << ": ";
				cout << "Enter the amount of Dollars: ";
				cin >> whl;
				wallet.setWhlParts(whl);
				cout << "   Enter the amount of Cents:   ";
				cin >> frac;
				wallet.setFracParts(frac);

				stackCurrency.push(wallet);
			}
		}
	}

	case 2:
	{
		//if (dataTypeSelect == 1)
		//{
		//	stackInt.pop();
		//}
		//else if (dataTypeSelect == 2)
		//{
		//	stackDouble.pop();
		//}

		//else if (dataTypeSelect == 3)
		//{
		//	stackString.pop();
		//}

		//else if (dataTypeSelect == 4)
		//{
		//	stackCurrency.pop();
		//}




		cout << "Popped a value off the stack";
	}

	case 3:
	{
		goto mainMenu;
	}

	case 4:
	{
		menu.drawStackImage(stackInt, stackDouble, stackString, stackCurrency, dataTypeSelect);
	}

	case 5:
	{
		// delete stack function will go here

		//if (dataTypeSelect == 1)
		//{
		//	stackInt.DELETE();
		//}
		//else if (dataTypeSelect == 2)
		//{
		//	stackDouble.DELETE();
		//}

		//else if (dataTypeSelect == 3)
		//{
		//	stackString.DELETE();
		//}

		//else if (dataTypeSelect == 4)
		//{
		//	stackCurrency.DELETE();
		//}
	}

	case 6:
	{

	}



	}


	
	




	// create 


	system("pause");
	return 0;
}


















//cout << "How many Currency items would you like to Push? ";
//cin >> tempval;
//for (int i = 0; i <= tempval; i++)
//{
//	cout << "Enter the amount of Dollars: ";
//	cin >> whl;
//	wallet.setWhlParts(whl);
//	cout << "Enter the amount of Cents: ";
//	cin >> frac;
//	wallet.setFracParts(frac);
//
//	stackCurrency.push(wallet);
//	i++;
//}
//
//
//
//stackString.push("hello");
//stackString.push("kyle");
//stackString.push("succ");
//stackString.push("yyo");
//
//stackDouble.push(10.1);
//stackDouble.push(2.8);
//stackDouble.push(1.7);
//stackDouble.push(21.8);
//
//stackInt.push(111);
//stackInt.push(1);
//stackInt.push(987);
//stackInt.push(5487);
//
//
//
//menu.drawStackImage(stackInt, stackDouble, stackString, stackCurrency);







////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////













































//////////////////////////////////////////////
////				Jasraj Dhudwal
////				Kyle Muldoon
////				CIS 22C Lab_02
//////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////
////		MAIN FILE
//////////////////////////////////////////////
//// Lab_02_JD-KM.cpp
//////////////////////////////////////////////
////
////
////
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//#include "Node.h"
//#include "Stack.h"
//#include "Currency.h"
//#include "Menus.h"
//using namespace std;
//
//// FUNCTION PROTOTYPES
//
//
//int main()
//{
//	Stack stack1;
//	LinkedList list;
//	int o = 15;
//	int check;
//
//	//list.appendNode(2);
//	list.appendNode(3);
//	list.appendNode(25);
//	list.addNode(10);
//	//list.deleteNode(25);
//	//list.displayList();
//
//
//	stack1.push(5);
//	stack1.push(10);
//	stack1.push(15);
//	stack1.Display();
//
//	
//	stack1.pop(o);
//	stack1.Display();
//
//	check = list.findAny(1);
//
//	if (check != -1)
//	{
//		cout << "The number was found at the " << check << "th index in the linked list" << endl;
//	}
//	else
//	{
//		cout << "it wasnt found" << endl;
//	}
//	
//
//
//	/*list.insertFirst(5);
//	list.insertFirst(10);
//	list.insertFirst(15);
//	list.displayList();
//
//	list.removeFirst(o);
//	list.displayList();*/
//	system("pause");
//	return 0;
//}









//////////////////////////////////////////////
////				Jasraj Dhudwal
////				Kyle Muldoon
////				CIS 22C Lab_02
//////////////////////////////////////////////
//
//
//
//////////////////////////////////////////////
////		MAIN FILE
//////////////////////////////////////////////
//// Lab_02_JD-KM.cpp
//////////////////////////////////////////////
////
////
////
//
//#include <iostream>
//#include <string>
//#include <iomanip>
//#include "Node.h"
//#include "Stack.h"
//#include "Currency.h"
//#include "Menus.h"
//using namespace std;
//
//// FUNCTION PROTOTYPES
//
//
//int main()
//{
//	Stack<string> stack1;
//	LinkedList<string> list;
//	string o = "fuck";
//	//int check;
//
//	//list.appendNode(2);
//	list.appendNode("abc");
//	list.appendNode("cde");
//	list.addNode("bcd");
//	//list.deleteNode(25);
//	list.displayList();
//
//
//	stack1.push("fuck");
//	stack1.push("yo");
//	stack1.push("bitch");
//	stack1.Display();
//
//
//	stack1.pop(o);
//	stack1.Display();
//
//	stack1.isStackEmpty();
//
//	 list.findAny("abc");
//
//
//
//	/*list.insertFirst(5);
//	list.insertFirst(10);
//	list.insertFirst(15);
//	list.displayList();
//
//	list.removeFirst(o);
//	list.displayList();*/
//	system("pause");
//	return 0;
//}