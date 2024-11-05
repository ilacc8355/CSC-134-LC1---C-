//Isaac Laccone - 10/10/2024 - Chapter 7 In Class Exercise 2
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int MONTHS = 12;
    double rainfall[MONTHS];
    string monthNames[MONTHS] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Collect rainfall data for each month
    for (int i = 0; i < MONTHS; i++) {
        while (true) {
            cout << "Enter the total rainfall for " << monthNames[i] << " (in inches): ";
            cin >> rainfall[i];

            if (cin.fail() || rainfall[i] < 0) {
                cin.clear(); // Clear the error flag
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
                cout << "Invalid input. Please enter a non-negative number." << endl;
            }
            else {
                break; // Valid input, exit the loop
            }
        }
    }

    // Calculate total rainfall, average rainfall, highest and lowest months
    double totalRainfall = 0;
    double highestRainfall = rainfall[0];
    double lowestRainfall = rainfall[0];
    int highestMonthIndex = 0;
    int lowestMonthIndex = 0;

    for (int i = 0; i < MONTHS; i++) {
        totalRainfall += rainfall[i];

        if (rainfall[i] > highestRainfall) {
            highestRainfall = rainfall[i];
            highestMonthIndex = i;
        }

        if (rainfall[i] < lowestRainfall) {
            lowestRainfall = rainfall[i];
            lowestMonthIndex = i;
        }
    }

    double averageRainfall = totalRainfall / MONTHS;

    // Display results
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "\nTotal rainfall for the year: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " inches" << endl;
    cout << "Month with highest rainfall: " << monthNames[highestMonthIndex] << " (" << highestRainfall << " inches)" << endl;
    cout << "Month with lowest rainfall: " << monthNames[lowestMonthIndex] << " (" << lowestRainfall << " inches)" << endl;

    return 0;
}
