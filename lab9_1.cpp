#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int row;
int i=1;
double loan , interest_rate , pay_per_year , interest , new_balance , total ,payment;

int main(){	
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate;
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
	
	new_balance = loan;

	while (new_balance > 0)
	{
	row = i;
	interest = new_balance*interest_rate/100;
	total = new_balance + interest;
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << row; 
	cout << setw(13) << left << new_balance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;
	

	pay_per_year = payment;
	if (total < payment) pay_per_year = total;
	new_balance = total - pay_per_year;

	cout << setw(13) << left << pay_per_year;
	cout << setw(13) << left << new_balance;
	cout << "\n";	
	
	i++;
	}

	//cout << setw(13) << left << "0";
	return 0;
}
	