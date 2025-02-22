#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

// Function to generate and print Fibonacci Series up to n terms
void printFibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms:\n";

    for (int i = 1; i <= n; i++) {
        cout << first << " ";  // Print the current Fibonacci number
        next = first + second;  // Compute the next term
        first = second;  // Move to the next number
        second = next;  // Update second
    }
    cout << endl; // Move to the next line
}

int main() {
    int fibTerms;

    // Asking user for the number of terms
    cout << "Enter the number of Fibonacci terms: ";
    cin >> fibTerms;

    // Measure runtime
    auto start = high_resolution_clock::now();
    printFibonacci(fibTerms);
    auto stop = high_resolution_clock::now();

    cout << "Time taken: " << duration_cast<microseconds>(stop - start).count() << " microseconds\n";

    return 0;
}
