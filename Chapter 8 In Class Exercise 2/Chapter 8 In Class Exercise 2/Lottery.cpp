//Isaac Laccone - 10/18/2024 - Chapter 8 In Class Exercise 2
#include <iostream>
using namespace std;
int linearSearch(const int arr[], int size, int value);
int main()
{
	int array[] = {13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
	int number;
	cout << "Enter the winning lottery number: " << endl;
	cin >> number;
	int search = linearSearch(array, 10, number);
	if (search != -1)
	{
		cout << "You have a winning ticket!" << endl;
	}
	else
	{
		cout << "You do not have a winning ticket" << endl;
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