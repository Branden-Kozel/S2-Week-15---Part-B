/*\
Name: Branden Kozel
Date: 4/25/24
Class: 1202 201
\*/

#include <iostream>
#include<iomanip>

using namespace std;

template<typename T>
T decimalHalf(T value) 
{
    return value / 2;
}

template<typename T>
T intHalf(T value) 
{
    if (value / 2 == 0) 
    {
        return value / 2;
    }

    else 
    {
        return (value + 1) / 2;
    }
}

int main()
{
    int val1, val2;
    float floatValue;
    double doubleValue;
    bool userInput;

    cout << "Would you like to enter integer values or float and double values? (1 for integer and 0 for F and D values)\nResponse: "; cin >> userInput;

    if (userInput == 1)
    {
        cout << "Please enter a integer value: "; cin >> val1;
        cout << "\nPlease enter a second integer value: "; cin >> val2;

        cout << "Half of " << val1 << " is: " << intHalf(val1) << endl;
        cout << "Half of " << val2 << " is: " << intHalf(val2) << endl;
    }

    else
    {
        cout << "Please enter a float value: "; cin >> floatValue;
        cout << "\nPlease enter a double value: "; cin >> doubleValue;

        cout << "Half of " << floatValue << " is: " << decimalHalf(floatValue) << endl;
        cout << "Half of " << doubleValue << " is: " << decimalHalf(doubleValue) << endl;
    }
    
    system("pause");
    return 0;
}