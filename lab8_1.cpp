#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
	double prevBalance;
	double inter;
	double payment;
	cout << "Enter initial loan: ";
	cin >> prevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> inter;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for (int i = 1;1; i++)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << prevBalance;
		double interest = prevBalance *(double)inter/100;
		cout << setw(13) << left << interest;
		double total = prevBalance + interest;
		cout << setw(13) << left << total;
		if (total<payment)
		{
			cout << setw(13) << left << total;
			cout << setw(13) << left << 0.00;
			break;
		}
		cout << setw(13) << left << payment;
		double newblance = total - payment ;
		cout << setw(13) << left << newblance;
		cout << "\n";
		prevBalance = newblance ;
		if (newblance ==0) break;
		
	}
	return 0;
}