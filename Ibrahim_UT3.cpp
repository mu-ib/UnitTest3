/**
* Muhammad Ibrahim
* Ibrahim Unit Test 3
* 24 November 2020
* EXTRA: Allow the user to switch the place of the numbers
**/

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    int operation;
    char switchNums;
    //ask for the numbers and error check
    cout << "Enter a positive integer: ";
    cin >> num1;

    while (num1 < 0) {
        cout << "Invalid Input." << endl;
        cout << "Enter a positive integer: ";
        cin >> num1;
    }

    cout << "Enter a positive integer: ";
    cin >> num2;

    while (num2 < 0) {
        cout << "Invalid Input." << endl;
        cout << "Enter a positive integer: ";
        cin >> num2;
    }

    //Ask for what operation to do on the numbers
    cout << "What operation would you like to perform with these numbers?\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\nEnter the number of your choice: ";
    cin >> operation;

    //ASk to switch places for the EXTRA
    cout << num1 << " is the first number and " << num2 << " is the second number." << endl
        << "Would you like to switch them so that " << num2 << " is the first number and " << num1 << " is the second number? (y/n) ";
    cin >> switchNums;

    //error check extra
    while (switchNums != 'y' && switchNums != 'n') {
        cout << "Invalid input." << endl
            << "Would you like to switch them so that " << num2 << " is the first number and " << num1 << " is the second number? (y/n) ";
        cin >> switchNums;
    }

    //if statement for EXTRA
    if (switchNums == 'y') {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    //switch statement to do the operations
    switch (operation)
    {
    case 1:
        cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
        break;
    case 2:
        cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
        break;
    case 3:
        cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
        break;
    case 4:
        cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
        break;
    default:
        break;
    }
}