//Isaac Laccone - 10/18/2024 - Chapter 8 Exercise 1 
#include <iostream>
#include <string>
using namespace std;

// Function to perform selection sort on an array of strings
void selectionSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Assume the minimum is the first element
        int minIndex = i;
        // Test against elements after i to find the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

// Driver program to test the selection sort
int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {
        "Collins, Bill", "Smith, Bart", "Allen, Jim",
        "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
        "Taylor, Terri", "Johnson, Jill",
        "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
        "James, Jean", "Weaver, Jim", "Pore, Bob",
        "Rutherford, Greg", "Javens, Renee",
        "Harrison, Rose", "Setzer, Cathy",
        "Pike, Gordon", "Holland, Beth"
    };

    // Sort the names
    selectionSort(names, NUM_NAMES);

    // Output the sorted names
    cout << "Sorted names:" << endl;
    for (int i = 0; i < NUM_NAMES; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
