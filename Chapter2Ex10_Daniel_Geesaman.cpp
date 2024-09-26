/*
Title:Chapter 2 Exercise 10 - Distance per tank of gas
File name:Chapter2Ex10_Daniel_Geesaman.cpp
Programmer:Daniel Geesaman
Date:9/26/2024
Requirements:
    Create a C++ program that does the following:
    10. Miles Per Gallon - Part A
    '
    A car holds 15 gallons of gasoline and can travel 375 miles before refueling.
    Write a program that calculates the number of miles per gallon the car gets.
    Display the result on the screen.

    Once you have coded this and placed in your main branch in GitHub, 
    create a second branch that revises your code so the user can enter the number of gallons and miles driven.
*/

#include <iostream>
using namespace std;
//const double milesDriven = 375;
//const double gasUsed = 15;


int main()
{
    double milesDriven;
    double gasUsed;
    cout << "Please enter the miles you drove:" << endl;
    cin >> milesDriven;
    cout << "Please enter the amount of gas used:" << endl;
    cin >> gasUsed;
    double milesPerGallon = milesDriven / gasUsed;
    cout << "Your car gets " << milesPerGallon << " miles per gallon." << endl;
    return 0;
}
