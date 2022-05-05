/********************************************************************
 *  Assignment: Unit 7
 *  Title:      Recursion
 *  Student:    Michael Nguyen
 *  Teacher:    Tyson McMillan
 *  Date:       05/04/2022
 *
 *  Description: This program is just practice program to demonstrate
 *               the recursion algorithm.
 *
 *********************************************************************/

#include<iostream>

using namespace std;

int fact(int);

int main()
{
    int number = 0;

    cout << "Please enter a number: ";
    cin >> number;

    cout << "The factorial of " << number << " is " << fact(number) << endl;

    return 0;
}

int fact(int num)
{
    if(num > 1)
    {
        return num * fact(num - 1);
    }
    else
    {
        return 1;
    }
}