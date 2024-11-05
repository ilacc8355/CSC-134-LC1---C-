//Isaac Laccone - 10/10/2024 - Chapter 7 In Class Exercise 4
#include <iostream>
#include <string>
#include <iomanip>
const int ROWS = 3;
const int COLS = 3;
bool rowsPass(int square[][COLS]);
bool colsPass(int square[][COLS]);
bool diagsPass(int square[][COLS]);
using namespace std;

int main() {
	int square[ROWS][COLS] = { {4,9,2},
						 {3,5,7},
						 {8,1,6} };
	if (rowsPass(square)) {
		if (colsPass(square)) {
			if (diagsPass(square)) {
				cout << "This is a magic square" << endl;
				return 0;
			}
		}
	}
	cout << "This is a NOT magic square" << endl;
	return 0;
}
bool rowsPass(int square[][COLS]) {
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << square[i][j] << " ";
			if (j == 2)
				cout << endl;
		}
	}
	return true;
}
bool colsPass(int square[][COLS]) {
	return true;
}
bool diagsPass(int square[][COLS]) {
	return true;
}