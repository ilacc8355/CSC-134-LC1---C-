//Isaac Laccone - 11/4/2024 - Chapter 9 In Class Exercise 2
#include <iostream>
using namespace std;

int doSomething(int* x, int* y) {
	int temp = *x;

	*x = (*y) * 10;
	*y = temp * 10;

	return *x + *y;
}

int main() {
	int a = 5, b = 3;

	cout << "Before calling doSomething: a = " << a << ", b = " << b << endl;

	int result = doSomething(&a, &b);

	cout << "After calling doSomething: a = " << a << ", b = " << b << endl;
	cout << "Result of the function: " << result << endl;

	return 0;
}