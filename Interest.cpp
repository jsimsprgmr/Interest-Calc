#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//setting varibales
	float iniInv, monthDep, interest, years;
	float totalAm;
	float iniAmt, totalInt;
	
	//Data input section
	cout << "*************************\n";
	cout << "*******Data Input********\n";
	cout << "Initial Investment Amount: " ;
	cin >> iniInv;
	cout << endl;
	cout << "Monthly Deposit: ";
	cin >> monthDep;
	cout << endl;
	cout << "Annual Interest: ";
	cin >> interest;
	cout << endl;
	cout << "Number of years: ";
	cin >> years;
	system ("PAUSE");
	
	totalAm = iniInv;
	
	//Output with no mothly deposit
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "===============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "----------------------------------------------------------------\n";
	
	//Calcuations, loops, and output
	for (int i =0; i < years; i++){
		iniAmt = (totalAm) * ((interest/100));
		totalAm = totalAm + iniAmt;
		cout << (i+1) << "\t\t" << fixed << setprecision(2) << totalAm << "\t\t\t" << iniAmt << endl;
	}

	//Output with monthly deposit
	cout << "\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "===============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "----------------------------------------------------------------\n";
	
	
	//Calcuations, loops, and output
	for (int i =0; i < years; i++){
		totalInt = 0;
		for (int j = 0; j < 12; j++){
			iniAmt = (totalAm + monthDep) * ((interest/100)/12) ;
			totalInt = totalInt + iniAmt;
			totalAm = totalAm + monthDep + iniAmt;
		}
		cout << (i+1) << "\t\t" << fixed << setprecision(2) << totalAm << "\t\t\t" << totalInt << endl;
	}
	
	
	
	
	
	
}
