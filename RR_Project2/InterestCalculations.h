/******************************************************************************
Name: RR_Project2 - InterestCalculations.h
Author: Rosario Robinson
Date: October 2nd, 2021
School: Southern New Hampshire University
Course: CS 210 Programming Languages
Description: Project Two
*******************************************************************************/

using namespace std;

#ifndef INTERESTCALCULATIONS_H
#define INTERESTCALCULATIONS_H

#include <string>

// Class definition, which includes public and private member functions

class InterestCalculations {

    // Public member functions
public:
    InterestCalculations();

    // setters
    void SetInitalInvest(double newInitalInv);
    void SetMonthlyDeposit(double newMonthlyDep);
    void SetAnnualInterest(double newAnnualInt);
    void SetNumYears(double newNumYears);
 
    // getters
    double GetInitialInvest();
    double GetMonthlyDeposit();
    double GetAnnualInterest();
    double GetNumYears();

    // Private data members
private:
    double initialInvest;
    double monthlyDeposit;
    double annualInterest;
    double months;
    double numYears;

};

#endif
