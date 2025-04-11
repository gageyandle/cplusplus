#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double number;

	//prompt the user to enter a number
	cout << "Enter a number: ";
	cin >> number;

	//calculate the square root, sine, and cosine
	double squareRoot = sqrt(number);
	double sineValue = sin(number);
	double cosineValue = cos(number);

	// st the precision for floating-point output
	cout << fixed << setprecision(6);

	//display the results
	cout << "Square root of " << number << " is: " << squareRoot << endl;
	cout << "Sine of " << number << " is: " << sineValue << endl;
	cout << "Cosine of " << number << " is: " << cosineValue << endl;

	return 0;
}
