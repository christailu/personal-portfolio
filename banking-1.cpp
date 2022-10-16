#include <iostream>
#include <cctype>
#include<iomanip>

using namespace std;

int main() {
	char menuChoice = ' ';
	float checkingBalance = 12345.67;
	float savingsBalance = 54321.67;
	float userAmount = 0;
	
	cout << setprecision(2) << fixed << endl << endl;
	cout << "Checking Balance: $" << checkingBalance << endl;
	cout << "Savings Balance: $" << savingsBalance << endl << endl;
	
	cout << "*** DEWEY, CHEATUM, & HOWE BANK ***" << endl;
	cout << "A - Withdraw from Checking" << endl;
	cout << "B - Withdraw from Savings" << endl;
	cout << "C - Deposit to Checking" << endl;
	cout << "D - Deposit to Savings" << endl;
	cout << endl << endl;
	
	cout << "Make a selection: ";
	cin >> menuChoice;
	menuChoice = toupper(menuChoice);
	
	if (menuChoice == 'A') {
		cout << "Enter the amount to withdraw: $";
		cin >> userAmount;
		
		if (checkingBalance >= userAmount && userAmount > 0)
			checkingBalance -= userAmount;
		else
			cout << "Withdrawal denied!" << endl;
	}
	
	else if (menuChoice == 'B') {
		cout << "Enter the amount to withdraw: $";
		cin >> userAmount;
		
		if (savingsBalance >= userAmount && userAmount > 0)
			savingsBalance -= userAmount;
		else
			cout << "Withdrawal denied!" << endl;
	}
	
	else if (menuChoice == 'C') {
		cout << "Enter the amount to deposit: $";
		cin >> userAmount;
		
		if (userAmount > 0)
			checkingBalance += userAmount;
		else
			cout << "Deposit denied!" << endl;
	}
	
	else if (menuChoice == 'D') {
		cout << "Enter the amount to deposit: $";
		cin >> userAmount;
		
		if (userAmount > 0)
			savingsBalance += userAmount;
		else
			cout << "Deposit denied!" << endl;
	}
	
	else {
		cout << "Invalid option provided!";
	}
	
	cout << endl << endl;
	cout << "Checking Balance: $" << checkingBalance << endl;
	cout << "Savings Balance: $" << savingsBalance;
}