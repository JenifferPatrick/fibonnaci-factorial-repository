#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

// Function to calculate factorial of a given number
long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    }

    long long fact = 1; // Variable to store factorial result
    for (int i = 2; i <= num; i++) {
        fact *= i; // Multiply fact with the current number
    }
    return fact; // Return the computed factorial
}

int main() {
    int factNum;

    // Asking user for input
    cout << "Enter a number to find its factorial: ";
    cin >> factNum;

    // Measure runtime
    auto start = high_resolution_clock::now();
    long long result = factorial(factNum);
    auto stop = high_resolution_clock::now();

    // Compute and print factorial
    cout << "Factorial of " << factNum << " is: " << result << endl;
    cout << "Time taken: " << duration_cast<microseconds>(stop - start).count() << " microseconds\n";

    return 0;
}
