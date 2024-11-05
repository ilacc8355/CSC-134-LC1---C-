// Isaac Laccone - 10/3/2024 - 5.1 Lab

#include <iostream> 
using namespace std;

int main()
{
	char letter = 'a';

	cout << "Welcome to the letter input program!" << endl;
	cout << "Enter a letter (enter 'x' to exit the program)." << endl;

	while (letter != 'x')
	{
		cout << "Please enter a letter" << endl; 
		cin >> letter;
		cout << "The letter you entered is " << letter << endl;

		if (letter == 'x') {
			cout << "Exiting the program. Thank you!" << endl;
			break;
		}
	}

	return 0;
}
