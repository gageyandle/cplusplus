#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	// 1. Read a single character and display its ASCII code
	char input_char;
	cout << "Enter a single character: ";
	cin >> input_char;
	cout << "The ASCII code of '" << input_char << "' is: " << static_cast<int>(input_char) << endl;

	// 2. Demonstrate the use of at least three different escape sequences
	cout << "\nDemonstrating escape sequences:\n";
	cout << "1. Tab:\t\tHello\n";
	cout << "2. Newline:\n Hello \n";
	cout << "3. Backslash: \n";

	// 3. Convert lowercase to uppercase using character casting and functions
	char lowercase;
	cout << "\nEnter a lowercase character: ";
	cin >> lowercase;

	// Using character casting
	char uppercase_cast = static_cast<char>(toupper(lowercase));
	cout << "Uppercase (using casting): " << uppercase_cast << endl;

	// Using function
	char uppercase_func = toupper(lowercase);
	cout << "Uppercase (using function): " << uppercase_func << endl;

	// 4. Concatenate two strings entered by the user
	string str1, str2;
	cout << "\nEnter the first string: ";
	cin.ignore(); // Clear the input buffer
	getline(cin, str1);
    
	cout << "Enter the second string: ";
	getline(cin, str2);

	string concatenated = str1 + " " + str2;
	cout << "Concatenated string: " << concatenated << endl;

	return 0;
}
