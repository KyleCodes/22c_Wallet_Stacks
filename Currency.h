////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//		CURRENCY CLASS
////////////////////////////////////////////
// Currency.h
////////////////////////////////////////////

#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// The Currency class serves as an abstract base class which
// provides model for derived currency classes.

class Currency
{
protected:
	string curr_name;
	string frac_name;
	int whl_parts;
	int frac_parts;
public:
	// Default Constructor
	Currency();

	// Constructor
	//Currency();

	// Mutator Functions
	void simplify();
	void setCurrName(string);
	void setFracName(string);
	void setWhlParts(int);
	void setFracParts(int);

	// Accessor Functions
	string getCurrName() const;
	string getFracName() const;
	int getWhlParts() const;
	int getFracParts() const;
	void OutputToScreen();


	//void setCurr()
	//{
	//	int whl, frac;
	//	
	//	cout << "Enter the amount of Dollars: ";
	//	cin >> whl;
	//	setWhlParts(whl);
	//	cout << "Enter the amount of Cents: ";
	//	cin >> frac;
	//	setFracParts(frac);

	//}


	// Operator Overloads
	friend ostream &operator << (ostream& os, const Currency& obj)
	{
		const int comp = 10;

		if (obj.getFracParts() > comp)
			os << "$" << obj.getWhlParts() << "." << obj.getFracParts();
		else 
			os << "$" << obj.getWhlParts() << ".0" << obj.getFracParts();

		return os;
	}
	
	//friend istream &operator>>(istream& is, Currency& obj)
	//{
	//	ostringstream oss;
	//	int whl;
	//	int frac;
	//	string dollarsCents;

	//	cout << "Enter the amount of Dollars: ";
	//	cin >> whl;
	//	setWhlParts(whl);
	//	cout << "Enter the amount of Cents: ";
	//	cin >> frac;
	//	setFracParts(frac);

	//	oss << "$" << whl << "." << frac << endl;
	//	dollarsCents = oss.str();

	//	is >> dollarsCents;
	//	return is;
	//}

	//Currency operator += (const Currency &);
	//Currency operator - (const Currency &);
};

#endif