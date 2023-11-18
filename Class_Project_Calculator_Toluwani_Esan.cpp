//Toluwani Esan
//A00569424

#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include "Class_Project_Calculator_Toluwani_Esan.h"

using namespace std;
int Operation(int n);
int functions(int m);


int main() {
	
	cout << "Welcome to my Calculator" << endl;
	cout << "Does your operation need the use of certain functions?:" << endl;
	cout << "Enter either 'y' or 'n': ";
	char YesNo;
	cin >> YesNo;



	switch (YesNo) {
	case 'y':
		cout << "What function would you like to carry out?: " << endl;
		cout << "1. Square root" << endl;
		cout << "2. Exponentiation" << endl;
		cout << "Enter Operatoion number: ";
		int func;
		cin >> func;
		functions(func);
		break;
	case 'n':
		cout << "Pick you Operation" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction(Let the first number you enter be bigger than the second number" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cout << "" << endl;
		cout << "Enter Operatoion number: ";
		int OperNum;
		cin >> OperNum;
		Operation(OperNum);
		
	}



	return 0;
}

int Operation(int n) {

	if (n == 1) {
		cout << "Enter your numbers for Addition" << endl;
		double i;
		double j;
		cin >> i >> j;
		cout << i << " + " << j << endl;
		double result;
		result = i + j;
		cout << "Your answer is: " << result << endl;
	}
	else if (n == 2) {
		cout << "Enter your numbers for Subtraction" << endl;
		cerr << "Make sure the first number you enter is the bigger number between the two" << endl;
		double i;
		double j;
		cin >> i >> j;
		cout << i << " - " << j << endl;
		double result;
		result = i - j;
		cout << "Your answer is: " << result << endl;
	}
	else if (n == 3) {
		cout << "Enter your numbers for Multiplication" << endl;
		double i;
		double j;
		cin >> i >> j;
		cout << i << " x " << j << endl;
		double result;
		result = i * j;
		cout << "Your answer is: " << result << endl;
	}
	else if (n == 4) {
		cout << "Enter your numbers for Division" << endl;
		cerr << "You can not have zero as the denominator(j)" << endl;
		double i;
		double j;
		cin >> i >> j;
		cout << i << " / " << j << endl;
		double result;
		result = i / j;
		cout << "Your answer is: " << result << endl;
	}
	cout << "Do you still want to continue solving?('y' for yes and 'n' for no): ";
	char yn;
	cin >> yn;
	if (yn == 'y') {
		main();
	}
	else if (yn == 'n') {
		cout << "Bye Bye" << endl;
	}
	return 0;
}


int functions(int m) {
	if (m == 1) {
		cerr << "Do not enter zero or a negative number!" << endl;
		cout << "Enter your number: ";
		double k;
		cin >> k;
		double result;
		result = sqrt(k);
		cout << "The square root of your number is: " << result << endl;
	}
	else if (m == 2) {
		cout << "Enter your number that you want to exponentiate: ";
		double k;
		cin >> k;
		cout << "Enter the exponentiation number: ";
		double l;
		cin >> l;
		double result;
		result = pow(k, l);
		cout << "Your exponentiation result is: " << result << endl;
	}
	cout << "Do you still want to continue solving?('y' for yes and 'n' for no): ";
	char yn;
	cin >> yn;
	if (yn == 'y') {
		main();
	}
	else if (yn == 'n') {
		cout << "Bye Bye" << endl;
	}
		return 0;
}