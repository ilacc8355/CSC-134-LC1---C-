// This program has the user input a number n and then finds the
// mean of the first n positive integers

// Isaac Laccone - 10/3/2024 - Lab 5.3

#include <iostream> 
using namespace std;


int main()
{
	int n, m;
	int total = 0; // total holds the sum of the first n positive numbers 
	int count = 0;		
	int number;	// the amount of numbers
	float mean;	// the average of the first n positive numbers

	cout << "Please enter a starting positive integer (n): ";
	cin >> n;
	cout << "Please enter an ending positive integer (m): "; 
	cin >> m;


	if (n > 0 && m >= n)
	{
		for (int number = n; number <= m; number++)
		{
			total += number;
			count++;
		}

		mean = static_cast<float>(total) / count;
		cout << "The mean average of the integers from " << n << " to " << m << " is " << mean << endl;





	}
	else {
		cout << "Invalid input - n must be positive and m must be greater than or equal to n" << endl;
	}
	return 0;
}
