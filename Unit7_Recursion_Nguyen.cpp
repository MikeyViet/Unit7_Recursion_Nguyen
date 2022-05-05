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