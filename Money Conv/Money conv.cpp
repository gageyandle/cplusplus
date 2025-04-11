#include <iostream>
#include <cmath>

using namespace std;

int main() {
	cout << "Enter an amount in dollars: ";
  double amount;
  cin >> amount;
    
	int Amount = static_cast<int>(amount * 100);
    
	int Quarters = Amount / 25;
    	Amount = Amount % 25;

	int Dimes = Amount / 10;
    	Amount = Amount % 10;

	int Nickels = Amount / 5;
    	Amount = Amount % 5;

	int Pennies = Amount;

  cout << "Your amount " << amount << " consists of" << endl <<
	"  " << Quarters << " quarters" << endl <<
	"  " << Dimes << " dimes" << endl <<
	"  " << Nickels << " nickels" << endl <<
	"  " << Pennies << " pennies";
    
	return 0;
}
