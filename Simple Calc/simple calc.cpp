#include <iostream>
#include <cmath>
// includes the cmath library for mathematical functions from chapter 4 and 6

using namespace std;

int main() {
	double num1, num2;
	// two double variables to store the users input numbers
    
	// Ask the user to enter two numbers
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "\nEnter the second number: ";
	cin >> num2;
    
	// performs calculations
	double sum = num1 + num2;
	double difference = num1 - num2;
	double product = num1 * num2;
	double quotient = num1 / num2;
	double power = pow(num1, num2);
    
    
	// Display results
	cout << "\nCalculations:" << endl;
	cout << "Addition: " << num1 << "+" << num2 << "=" << sum << endl;
	cout << "Subtraction: " << num1 << "-" << num2 << "=" << difference << endl;
	cout << "Multiplication: " << num1 << "*" << num2 << "=" << product << endl;
	cout << "Division:  " << num1 << "/" << num2 << "=" << quotient << endl;
	cout << "Exponentiation:  " << num1 << "^" << num2 << "=" << power << endl;
	cout << "\nCreated by: Gage Yandle";
	return 0;
}
