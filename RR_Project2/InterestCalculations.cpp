/******************************************************************************
Name: RR_Project2 - InterestCalculations.cpp
Author: Rosario Robinson
Date: October 2nd, 2021
School: Southern New Hampshire University
Course: CS 210 Programming Languages
Description: Project Two
*******************************************************************************/

using namespace std;

#include <iostream>
#include <string>

#include "InterestCalculations.h"

// Class definition

// Default
InterestCalculations::InterestCalculations() {
    
}

// Constructors for setters
void InterestCalculations::SetInitalInvest(double newInitialInv) {
    initialInvest = newInitialInv;
}

void InterestCalculations::SetMonthlyDeposit(double newMonthlyDep) {
    monthlyDeposit = newMonthlyDep;
}

void InterestCalculations::SetAnnualInterest(double newAnnualInt) {
    annualInterest = newAnnualInt;
}

void InterestCalculations::SetNumYears(double newNumYears) {
    numYears = newNumYears;
}

// Constructors for getters
double InterestCalculations::GetInitialInvest() {
    return initialInvest;
}

double InterestCalculations::GetMonthlyDeposit() {
    return monthlyDeposit;
}

double InterestCalculations::GetAnnualInterest() {
    return annualInterest;
}

double InterestCalculations::GetNumYears() {
    return numYears;
}