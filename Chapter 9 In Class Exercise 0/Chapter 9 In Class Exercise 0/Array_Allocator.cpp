//Isaac Laccone - 11/4/2024 - Chapter 9 In Class Exercise 0
#include <iostream>
using namespace std;

int* arrayAllocator(int size) {

	int* array = new int[size];
	return array;
}

int main() {
	int numElements;

	cout << "Enter the number of elements for the array: ";
	cin >> numElements;

	int* myArray = arrayAllocator(numElements);

	for (int i = 0; i < numElements; ++i) {
		myArray[i] = i * 10; 
	}

	cout << "Array values:" << endl;
	for (int i = 0; i < numElements; ++i) {
		cout << myArray[i] << " ";
	}
	cout << endl;

	delete[] myArray;

	return 0;

}