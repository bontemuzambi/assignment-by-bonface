#include <iostream>  // Include the input-output stream library

using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    return n * factorial(n - 1); // Recursive call
}

int main() {
    // Calculate and display the factorials of 5, 7, and 10
    int num1 = 5, num2 = 7, num3 = 10;

    cout << "Factorial of " << num1 << " is: " << factorial(num1) << endl;
    cout << "Factorial of " << num2 << " is: " << factorial(num2) << endl;
    cout << "Factorial of " << num3 << " is: " << factorial(num3) << endl;

    return 0; // Indicate successful program termination
}
