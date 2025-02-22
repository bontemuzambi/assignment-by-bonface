#include <iostream>  // Include the input-output stream library
using namespace std;

void displayFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    // Check if the input is valid (must be a positive integer)
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }

    // Display the Fibonacci sequence
    cout << "Fibonacci Sequence up to " << n << " terms:" << endl;

    // Loop to generate the Fibonacci sequence
    for (int i = 1; i <= n; ++i) {
        // Print the current term
        cout << t1 << " ";

        // Calculate the next term
        nextTerm = t1 + t2;

        // Update the values of t1 and t2 for the next iteration
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl; // Move to the next line after printing the sequence
}

int main() {
    // Display the Fibonacci sequence for specific numbers
    displayFibonacci(5);  // Display Fibonacci sequence up to 5 terms
    displayFibonacci(7);  // Display Fibonacci sequence up to 7 terms
    displayFibonacci(10); // Display Fibonacci sequence up to 10 terms

    return 0; // Indicate successful program termination
}
