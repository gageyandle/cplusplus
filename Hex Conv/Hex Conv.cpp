#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//function prototypes
int hexToDecimal(const string& hex, bool uppercase = true);
void displayResult(const string& hex, int decimal);
inline int charToInt(char c);

//string for conversion
const string hexChars = "0123456789ABCDEF";

//convert hexadecimal to decimal
int hexToDecimal(const string& hex, bool uppercase) {
	int decimal = 0;
	int power = 0;

	for (int i = hex.length() - 1; i >= 0; i--) {
		char c = uppercase ? toupper(hex[i]) : hex[i];
		decimal += charToInt(c) * pow(16, power);
		power++;
	}

	return decimal;
}

//void function to display the result
void displayResult(const string& hex, int decimal) {
	cout << "Conversion: " << hex << " is " << decimal<< " as a decimal" << endl;
}

//inline to convert character to integer
inline int charToInt(char c) {
	static const int offset = 10;
	if (c >= '0' && c <= '9') return c - '0';
	return toupper(c) - 'A' + offset;
}

int main() {
	string hexInput;

	cout << "Enter a hexadecimal number: ";
	cin >> hexInput;

	int decimalResult = hexToDecimal(hexInput);

	displayResult(hexInput, decimalResult);

	//local static variable
	static int conversionCount = 0;
	conversionCount++;

	cout << "Number of conversions performed: " << conversionCount << endl;
	cout << endl;

	return 0;
}
