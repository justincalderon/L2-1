//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L2-1                                              * 
//*                                                                     * 
//* Written by      : Justin Calderon                                   * 
//*                                                                     * 
//* Purpose         : This program will calculate the amount of boxes   *
//                    needed, remaining cookies, containers needed,     *
//		      and remaining boxes based on number of cookies    *
//		      value.                                            *
//*									*
//*									*
//*									*
//*                                                                     * 
//* Inputs          : - User enters value for number of cookies per box *
//		      - User enters value for number of boxes per	*
//			container.					*
//		      - User enters value for number of cookies.        *
//*                                                                     * 
//* Outputs         : - Displays, Enter the number of cookies per box or*
//		 	press 'Enter' to use the default of 24 per box. *
//		      - Displays, Cookies per box selected value.       *
//	 	      - Displays, Enter the number of boxes per		*
//		        container or press 'Enter' to use the default   *
//			of 75 boxes per container.			*
//		      - Displays, Boxes per container selected value.   *
//		      - Displays, Enter the total number of cookies.    *
//		      - Displays output values for boxes needed,	*
//		        remaining cookies, containers needed, and	*
//		        remaining boxes.				*
//*                                                                     * 
//* Calls           : No internal or external calls                     * 
//*                                                                     * 
//* Structure       : BEGIN                                             * 
//*                        Straight line code no sub-processes          * 
//*                   STOP                                              * 
//*                        End of Program                               * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Collaboration   :  cplusplus.com					*
//*									*
//*									*
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//*     03/02/22 jcalderon 000.000.000 Initial release of program       * 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <math.h>
#include <conio.h> // console input-output header file ex. getch()

using namespace std;

int main()
{
	// Declared variables
	int input;
	int input2;

	int cookiesPerBox;
	int boxPerContainer;
	int numOfCookies;

	int boxesNeeded;
	int cookiesLeftOver;
	int containersNeeded;
	int boxesLeftOver;

	cout << "Justin Calderon\t" << "L2-1\tL2-1.exe" << endl;
	cout << endl;

	// Prompt user to enter value of cookies or to use defaul value of 24 cookies.
	cout << "Enter the number of cookies per box or press" << endl;
	cout << " 'Enter' to use the default of 24 per box." << endl;
	cout << endl;

	// ASCII code for enter key is 13 - carriage return
	input = _getch();

	// if/else statement decides to select default value or user input value.
	if (input == 13)
	{
		cookiesPerBox = 24;
		cout << "Default of cookies per box will be used." << endl;
		cout << endl;
	}
	else 
	{
		// Validate if input value from user is numeric, terminate program if not.
		if (cin >> cookiesPerBox)
		{
			// Terminate program if cookies exceed 24 cookies per box.
			if (cookiesPerBox > 24)
			{
				cout << "Cannot exceed more than 24 cookies per box. Exiting program.";
				cout << endl;
				return 0;
				
			}
			else
			{
				cout << cookiesPerBox;
				cout << " cookies per box will be used." << endl;
				cout << endl;
			}
		}
		else
		{
			cout << "Numbers only, exiting program.";
			cout << endl;
			return 0;
		}
		cout << endl;
	}

	// Prompt user to enter value of boxes per container or press 'Enter' to use the default of 75 boxes per container
	cout << "Enter the number of boxes per container or press" << endl;
	cout << " 'Enter' to use the default of 75 boxes per container." << endl;
	cout << endl;

	// ASCII code for enter key is 13 - carriage return
	input2 = _getch();

	// if/else statement decides to select default value or user input value.
	if (input2 == 13)
	{
		boxPerContainer = 75;
		cout << "Default boxes per container will be used." << endl;
		cout << endl;
	}
	else
	{
		// Validate if input value from user is numeric, terminate program if not.
		if (cin >> boxPerContainer)
		{
			// Terminate program if boxes exceed 75 boxes per container.
			if (boxPerContainer > 75)
			{
				cout << "Cannot exceed more than 75 boxes per container. Exiting program.";
				cout << endl;
				return 0;
			}
			else
			{
				cout << boxPerContainer;
				cout << " boxes per container will be used." << endl;
				cout << endl;
			}
		}
		else
		{
			cout << "Numbers only, exiting program.";
			cout << endl;
			return 0;
		}
	}

	// Prompt user to enter value of number of cookies, validate if input value from user is numeric.
	cout << "Enter the total number of cookies: ";
	if (cin >> numOfCookies)
	{
		// leave blank
	}
	else
	{
		cout << "Numbers only, exiting program.";
		cout << endl;
		return 0;
		
	}
	
	//cout << "Enter the total number of cookies: ";
	//cin >> numOfCookies;
	//cout << endl;
	
	// Calculations for boxesNeeded, cookiesLeftOver, containersNeeded, boxesLeftOver
	boxesNeeded = numOfCookies / cookiesPerBox;
	cookiesLeftOver = numOfCookies % cookiesPerBox;
	containersNeeded = boxesNeeded / boxPerContainer;
	boxesLeftOver = boxesNeeded % boxPerContainer;

	// Display values for
		// the number of cookie boxes need to hold the cookies
		// the value of leftover cookies
		// the number of containers needed to store the cookie boxes
		// the value of leftover boxes
	cout << "\tThe number of cookie boxes needed to hold the cookies: ";
	cout << boxesNeeded;
	cout << endl;
	cout << "					     Leftover cookies: ";
	cout << cookiesLeftOver;
	cout << endl;
	cout << "    The number of containers needed to store the cookie boxes: ";
	cout << containersNeeded;
	cout << endl;
	cout << "					       Leftover boxes: ";
	cout << boxesLeftOver;
	cout << endl;


	char q;
	cout << "\nPress any key to Exit.";
	cin.ignore(2, '\n');
	cin.get(q);
	return 0;

}
