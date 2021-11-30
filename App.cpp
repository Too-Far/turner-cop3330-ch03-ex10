/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Turner
 */

#include "std_lib_facilities.h"

int main()
{	
    string operation;
	double val1, val2, result;

	bool x;
    x = false;

	cout << "Please insert a math operation, followed by two operands... (Example + 100 3.14): ";
	cin >> operation >> val1 >> val2;

	if (operation == "+") {
		result = val1 + val2;
		x = true;
	} else if (operation == "plus") {
        result = val1 + val2;
        x = true;
    } else if (operation == "-") {
        result = val1 - val2;
        x = true;
    } else if (operation == "minus") {
        result = val1 - val2;
        x = true;
    } else if (operation == "*") {
        result = val1 * val2;
        x = true;
    } else if (operation == "mul") {
        result = val1 * val2;
        x = true;
    } else if (operation == "/") {
        result = val1 / val2;
        x = true;
    } else if (operation == "div") {
        result = val1 / val2;
        x = true;
    }

    // Display computed results
	if (x == true) {
		cout << "The result is: " << result << '\n';
	} else {
		cout << "You input an invalid option.\n";
	}

	return 0;
}