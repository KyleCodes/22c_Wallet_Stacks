////////////////////////////////////////////
// Currency.cpp
////////////////////////////////////////////
// Provides definition of functions called in 
// Currency.h

// Includes attributes to be inherited by all derived classes and methods for working with them

#include "Currency.h"
using namespace std;

Currency::Currency()
{
	curr_name = "Dollars;";
	frac_name = "Cents";
	whl_parts = 0;
	frac_parts = 0;
}

void Currency::simplify()
{
	if (frac_parts >= 100)
	{
		whl_parts += (frac_parts / 100);
		frac_parts = (frac_parts % 100);
	}
	else if (frac_parts < 0)
	{
		whl_parts -= ((abs(frac_parts) / 100) + 1);
		frac_parts = 100 - (abs(frac_parts) % 100);
	}
}

void Currency::setCurrName(string cn)
{
	curr_name = cn;
}

void Currency::setFracName(string fn)
{
	frac_name = fn;
}

void Currency::setWhlParts(int wp)
{
	whl_parts = wp;
}

void Currency::setFracParts(int fp)
{
	frac_parts = fp;
}

string Currency::getCurrName() const
{
	return curr_name;
}

string Currency::getFracName() const
{
	return frac_name;
}

int Currency::getWhlParts() const
{
	return whl_parts;
}

int Currency::getFracParts() const
{
	return frac_parts;
}

void Currency::OutputToScreen()
{
	cout << "whole name: " << curr_name << endl;
	cout << "frac name: " << frac_name << endl;
	cout << "whl parts : " << whl_parts << endl;
	cout << "frac parts: " << frac_parts << endl;
}


//ostream& operator<<(ostream& os, const Currency& obj)
//{
//	os << "$" << obj.getWhlParts() << "." << obj.getFracParts();
//	return os;
//}


//Currency Currency::operator += (const Currency &right)
//{
//	// operator for addition 
//	Currency temp;
//	temp.whl_parts = whl_parts + right.whl_parts;
//	temp.frac_parts = frac_parts + right.frac_parts;
//	temp.simplify();
//	return temp;
//}
//
//Currency Currency::operator - (const Currency &right)
//{
//	// operator for subtraction
//	Currency temp;
//	temp.whl_parts = whl_parts - right.whl_parts;
//	temp.frac_parts = frac_parts - right.frac_parts;
//	temp.simplify();
//	return temp;
//
//}
