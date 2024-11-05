// This program takes two numbers (payRate & hours)
// and multiplies them to get grosspay.
// It then calculates net pay by subtracting 15%

//Isaac Laccone - 10/10/2024 - Lab 6.3


#include <iostream> 
#include <iomanip> 
using namespace std;


//Function prototypes 

void printDescription();
void computePaycheck(float, int, float&, float&);

int main()
{
	float payRate; 
	float grossPay; 
	float netPay; 
	int hours;

	cout << setprecision(2) << fixed;

	cout << "Welcome to the Pay Roll Program" << endl;
	printDescription(); //Call to Description function
	cout << "Please input the pay per hour" << endl; 
	cin >> payRate;

	cout << endl << "Please input the number of hours worked" << endl;
	cin >> hours;
	cout << endl << endl; 
	computePaycheck(payRate, hours, grossPay, netPay);
	
	cout << "The gross pay is $" << grossPay << endl;
	cout << "The net pay is $" << netPay << endl;

	cout << "We hope you enjoyed this program" << endl;

	return 0;
}
void computePaycheck(float rate, int time, float& gross, float& net) {
	
	gross = rate * time;
	net = gross * 0.85; 
}
void printDescription() {
	cout << "This program calculates the gross and net pay based on hourly rate and hours worked." << endl;
}