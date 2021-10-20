/******************************************************************************
Name: RR_Project2 - main.cpp
Author: Rosario Robinson
Date: October 2nd, 2021
School: Southern New Hampshire University
Course: CS 210 Programming Languages
Description: Project Two
*******************************************************************************/

// Libraries
#include <iostream>
#include <iomanip>
#include "InterestCalculations.h"

using namespace std;

// Main function that executes the user display and calculations 

int main() {

	// Variables to store user options/input
	double initialInvest;
	double monthlyDeposit;
	double annualInterest;
	double months;
	double numYears;

	// Variables to store for user calculations for year end static reports
	double interestAmount;
	double totalAmount;
	double depositAmount;


	// Displaying menu to user 
	std::cout << "********************************" << endl;
	std::cout << "********** Data Input **********" << endl;
	std::cout << "Initial Investment Amount: " << endl;
	std::cout << "Monthly Deposit: " << endl;
	std::cout << "Annual Interest: " << endl;
	std::cout << "Number of years: " << endl;

	// This line displays "Press any key to continue..."
	system("pause");

	// User input 
	std::cout << "********************************" << endl;
	std::cout << "********** Data Input **********" << endl;
	std::cout << "Initial Investment Amount: $";
	std::cin >> initialInvest;
	std::cout << "Monthly Deposit: $";
	std::cin >> monthlyDeposit;
	std::cout << "Annual Interest: %";
	std::cin >> annualInterest;
	std::cout << "Number of years: ";
	std::cin >> numYears;
	months = numYears * 12;

	system("pause");

	// User continues to input for next display of static reports

	// Balance and Interest Without Additional Monthly Deposits
	cout << "Balance and Interest Without Additional Monthly Deposits" << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	totalAmount = initialInvest;

	// Calculating interest based on annual interest rate input by the user
	for (int i = 1; i <= numYears; i++) {

		interestAmount = (totalAmount * (annualInterest / 100));

		totalAmount = totalAmount + interestAmount;

		// Prints output in spaced format
		cout << setw(4) << i << fixed << setprecision(2) << setw(20) << "$" << totalAmount << setw(20) << "$" << interestAmount << endl;

	}

	// Balance and Interest With Additional Monthly Deposits
	cout << "Balance and Interest With Additional Monthly Deposits" << endl;
	cout << "================================================================" << endl;
	cout << "Year          Year End Balance          Year End Earned Interest" << endl;
	cout << "----------------------------------------------------------------" << endl;

	depositAmount = monthlyDeposit; 
	totalAmount = initialInvest;

	double totalInterest = 0;
	interestAmount = 0;

	for (int i = 1; i <= numYears; i++) {

		for (int j = 0; j < 12; j++) {

			interestAmount = ((totalAmount + depositAmount) * ((annualInterest / 100) / 12));
			totalInterest += interestAmount;
			totalAmount = totalAmount + depositAmount + interestAmount; // Original balance + monthly deposit + interest

		}

		// Prints output in spaced format
		cout << setw(4) << i << fixed << setprecision(2) << setw(20) << "$" << totalAmount << setw(20) << "$" << totalInterest << endl;
		totalInterest = 0;
	}


	return 0;
}
