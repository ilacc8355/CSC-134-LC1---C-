//Isaac Laccone - 10/10/2024 - Chapter 7 In Class Exercise 1
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const int SIZE = 5;

int main() {
	string salsa[SIZE] = { "mild", "medium","sweet", "hot","zesty" };
	int jars[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter the number of jars of " << salsa[i] << " sold ";
		cin >> jars[i];
		while (jars[i] < 0) {
			cout << "Enter the number of jars of " << salsa[i] << " sold --(must be > 0) ";
			cin >> jars[i];
		}
	}
	int most = jars[0];
	int mostIndex = 0;
	int least = jars[0];
	int leastIndex = 0;
	cout << setw(10) << "type" << setw(15) << "jars sold" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << setw(10) << salsa[i] << setw(10) << jars[i] << endl;
	}
	for (int i = 0; i < SIZE; i++) {
		if (least > jars[i]) {
			least = jars[i];
			leastIndex = i;
		}
	}
	for (int i = 0; i < SIZE; i++) {
		if (jars[i] > most) {
			most = jars[i];
			mostIndex = i;
		}
	}
	cout << salsa[mostIndex] << " sold the largest amount " << endl;
	cout << salsa[leastIndex] << " sold the smallest amount " << endl;

	return 0;
}