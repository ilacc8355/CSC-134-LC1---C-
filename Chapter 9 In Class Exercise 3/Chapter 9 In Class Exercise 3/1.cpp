//Isaac Laccone - 11/4/2024 - Chapter 9 In Class Exercise 3
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to find the mode using pointer notation
int findMode(int* arr, int n) {
    // Create a hash map to count the frequency of each element
    unordered_map<int, int> freqMap;

    // Traverse the array using pointer notation
    for (int* ptr = arr; ptr < arr + n; ++ptr) {
        freqMap[*ptr]++; // Increment the count for the value at *ptr
    }

    // Find the mode by looking for the highest frequency
    int mode = -1;
    int maxCount = 0;

    for (const auto& pair : freqMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }

    // If no value occurs more than once, return -1
    if (maxCount == 1) {
        return -1;
    }

    return mode;
}

int main() {
    // Example arrays
    int arr1[] = { 3, 1, 4, 4, 5, 6, 7, 3 };
    int arr2[] = { 10, 20, 30, 40 };

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Test the findMode function
    int mode1 = findMode(arr1, n1);
    int mode2 = findMode(arr2, n2);

    // Display results
    cout << "Mode of arr1: " << (mode1 != -1 ? to_string(mode1) : "No mode") << endl;
    cout << "Mode of arr2: " << (mode2 != -1 ? to_string(mode2) : "No mode") << endl;

    return 0;
}
