// This program will read in a group of test scores (positive integers from 1 to 100)
// from the keyboard and then calculate and output the average score
// as well as the highest and lowest score. There will be a maximum of 100 scores.

// Isaac Laccone - 9/4/2024 - Lab 7.1

#include <iostream> 
using namespace std;

typedef int GradeType[100];	// declares a new data type:
// an integer array of 100 elements


float findAverage(const GradeType, int); // finds average of all grades 
int findHighest (const GradeType, int); // finds highest of all grades 
int findLowest (const GradeType, int); // finds lowest of all grades

int main()

{
	GradeType grades;	// the array holding the grades.
	int numberOfGrades = 0;	// the number of grades read.
	int pos = 0;	// index to the array.

	float avgOfGrades;	// contains the average of the grades.
	int highestGrade;	// contains the highest grade.
	int lowestGrade;	// contains the lowest grade.
	// Read in the values into the array pos = 0;
	cout << "Please input a grade from 1 to 100, (or -99 to stop)" << endl;

		cin >> grades[pos];

	while (grades[pos] != -99)
	{
		pos++;
		numberOfGrades++;
		cout << "Please input a grade from 1 to 100, (or -99 to stop): ";
		cin >> grades[pos];
		

	}

	// call to the function to find average 
	
	avgOfGrades = findAverage(grades, numberOfGrades);
	cout << endl << "The average of all the grades is " << avgOfGrades << endl;


	// Fill in the call to the function that calculates highest grade

	highestGrade = findHighest(grades, numberOfGrades);
	cout << endl << "The highest grade is " << highestGrade << endl;

	lowestGrade = findLowest(grades, numberOfGrades);
	cout << endl << "The lowest grade is " << lowestGrade << endl;

	return 0;
}


float findAverage (const GradeType array, int size)
{

	float sum = 0;	// holds the sum of all the numbers 
	for (int pos = 0; pos < size; pos++) {


		sum = sum + array[pos];
	}
		return (sum / size); //returns the average
	
}



int	findHighest (const GradeType array, int size)
{
	int highest = array[0];
	for (int pos = 1; pos < size; pos++) {
		if (array[pos] > highest) {
			highest = array[pos];
		}
	}
	return highest;
	

}


int	findLowest (const GradeType array, int size)
{
	int lowest = array[0];
	for (int pos = 1; pos < size; pos++) {
		if (array[pos] < lowest) {
			lowest = array[pos];
		}
	}
	return lowest;

}
