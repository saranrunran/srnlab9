#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double n, b, p;
	cout << "Enter initial loan: ";
	cin >> n;
	cout << "Enter interest rate per year (%): ";
	cin >> b;
	cout << "Enter amount you can pay per year: ";
	cin >> p;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	double sum = 1.0;
	for (int i = 1; sum != 0; i++){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << n;
		cout << setw(13) << left << (b/100)*n;
		cout << setw(13) << left << n+((b/100)*n);

		if((n+((b/100)*n)) < p) p = n+((b/100)*n);
		cout << setw(13) << left << p;
		
		sum = (n+((b/100.0)*n))-p;
		if (sum < 0) {
			sum = 0.00;
		}
		cout << setw(13) << left << sum;
		cout << "\n";
		n = sum;
	}
	
	

	
	return 0;
}
