// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// Isaac Laccone - 9/11/2024 - Lab 3.3

#include <iostream>
#include <cmath>	// needed for math functions like sqrt() 
#include <iomanip>
using namespace std;


int main()

{

	float a, b;	// the smaller two sides of the triangle 
	float hyp;	// the hypotenuse calculated by the program

	cout << "Please input the value of the two sides" << endl; 
	cin >> a >> b;


	hyp = sqrt(a * a + b * b);


	cout << "The sides of the right triangle are " << a << " and " << b << endl; 


	cout << fixed << setprecision(2); 
	cout << "The hypotenuse is " << hyp << endl;
	
	return 0;
}
