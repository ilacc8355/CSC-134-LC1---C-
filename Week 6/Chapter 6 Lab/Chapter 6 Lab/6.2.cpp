// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country
// "Now is the time for all good men to come to the aid of their	"
// Inputting a 1 will use the word party. Any other number will use the word country.

// Isaac Laccone - 10/10/2024 - Lab 6.2

#include <iostream> 
#include <string> 
using namespace std;

void writeProverb(int number);


int main()
{

	int wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their   "
		<< endl;
	cout << "Input a 1 if you want the sentence to be finished with party"
		<< endl;
	cout << "Input any other number for the word country" << endl; cout << "Please input your choice now" << endl;
	cin >> wordCode; cout
		<< endl; writeProverb(wordCode);

	return 0;
}
void writeProverb(int number)
{
	if (number == 1) {
		cout << "Now is the time for all good men to come to the aid of their party." << endl;


	}
	else {
		cout << "Now is the time for all good men to come to the aid of their country." << endl;
	}
}
