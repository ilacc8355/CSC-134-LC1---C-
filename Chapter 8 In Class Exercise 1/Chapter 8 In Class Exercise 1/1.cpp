//Isaac Laccone - 10/18/2024 - Chapter 8 In Class Excercise 1
#include <iostream>
using namespace std;
int linearSearch(const int arr[], int size, int value);
int main()
{
	int array[] = { 5658845,4520125,7895122,8777541,8451277,1302850,8080152,4562555,5552012,5050552,7825877,1250255,1005231,6545231,6545231,3852085,7576651,7881200,4581002 };
	int number;
	cout << "Please enter a charge account number: " << endl;
	cin >> number;
	int search = linearSearch(array, 18, number);
	if (search != -1)
	{
		cout << "The charge account number is valid" << endl;
	}
	else
	{
		cout << "The charge account number is invalid" << endl;
	}
	return 0;
}

int linearSearch(const int arr[], int size, int value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < size && !found)
	{
		if (arr[index] == value)
		{
			found = true;
			position = index;
		}
		index++;

	}
	return position;
}