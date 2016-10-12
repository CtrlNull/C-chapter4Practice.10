// This program demostrates the logical || operator.


#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//----Constants for minimum income and years--------------

	const double MIN_INCOME = 35000.00;
	const int MIN_YEARS = 5;

	double income;	// Annual income
	int years;		// Years at thte current job

	//----Get the annual income-------------------------------

	cout << "What is the annual income? ";
	cin >> income;

	//----Get the number of years at the current job.
	cout << "How many years have you worked at the current job? ";
	cin	 >> years;

	//----Determine the user's loan qualifications.
	
	if (income >= MIN_INCOME || years > MIN_YEARS)
		cout << "You qualify. \n";
	else
	{
		cout << "You must earn at least $" << MIN_INCOME
			<< " or have been employed more than " << MIN_YEARS
			<< " years.\n";
	}




    return 0;
}

