// Assignment1.cpp : Defines the entry point for the console application.
//

// INFO450ATM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath> //for withdrawal function

using namespace std;
void dispense(int moneyEntered)
{






	int main()
	{




		//May have to go back and switch to double withdraw - double withdraw;
		int withdraw;
		int value;
		int(withdraw > 1.00);
		int(withdraw < 300.00);

		switch (withdraw)
		{
		case 1:

		{
			// Ask for Withdrawl Amount. Must be greater than $1, cannot be greater than $300. Invalid amounts must be re-entered.//
			cout << "Welcome! Please enter withdrawal amount: " << endl;
			cin >> withdraw;
			while (fmod(withdraw, 1.00, 5.00, 10.00, 20.00, 50.00) != 0)
				cout << "Please enter amount that is a multiple of 1, 5, 10, 20 or $50! " << endl;
			cin >> withdraw;
		}

		if (withdraw > 300.00)
		{
			cout << "Sorry, the maximum amount you can withdraw is $300.00.  Pleaae re-enter amount. " << withdraw << endl;
			cout << "Please enter withdrawal amount: " << endl;

		}




		if (withdraw < 1.00)
		{
			cout << "Sorry, the minimum amount you can withdraw is $1.00. Please re-enter amount. " << withdraw << endl;
			cout << "Please enter withdrawal amount: " << endl;

		} //Ask for another withdrawl, Y to continue and N to exit.//
		else
		{
			int fifties(0), twenties(0), tens(0), fives(0), ones(0);

			int moneyLeftToDispense = moneyEntered;

			if (moneyLeftToDispense >= 50)

				fifties = moneyLeftToDispense / 50;
			moneyLeftToDispense = (moneyLeftToDispense % 50);
		}


		if (moneyLeftToDispense >= 20)
		{
			twenties = moneyLeftToDispense / 20;
			moneyLeftToDispense = (moneyLeftToDispense % 20);
		}
		if (moneyLeftToDispense >= 10)
		{
			tens = moneyLeftToDispense / 10;
			moneyLeftToDispense = (moneyLeftToDispense % 10);
		}
		if (moneyLeftToDispense >= 5)
		{
			fives = moneyLeftToDispense / 5;
			moneyLeftToDispense = (moneyLeftToDispense % 5);
		}
		if (moneyLeftToDispense >= 1)
		{
			ones = moneyLeftToDispense / 1;
			moneyLeftToDispense = (moneyLeftToDispense % 1);
		}
		if (moneyLeftToDispense > 0)
		{
			cout << " You have: " << fifties / withdraw << " bills" << endl;
			cout << " You have: " << twenties / withdraw << "bills" << endl;
			cout << "You have: " << tens / withdraw << "bills" << endl;
			cout << "You have: " << fives / withdraw << "bills" << endl;
			cout << "You have: " << ones / withdraw << "bills" << endl;
		}


		do
		{
			dispense(moneyEntered);

			cout << "Would you like to make another withdrawal? Y to continue, N to exit" << endl;
			cin >> answer;
		} while ((answer == 'Y') || (answer == 'y'));

		return withdraw;
		}

		void dispense(int moneyEntered)
		{
			cout << "Please enter withdrawal amount: " << endl;
			cin >> withdraw;
			return;
		}

		// return 0; ?









