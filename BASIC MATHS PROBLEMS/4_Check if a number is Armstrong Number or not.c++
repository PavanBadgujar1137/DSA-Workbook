#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrongNumber(int n) {
    int original = n; // Store the original number
    int sum = 0; // To store the sum of the cubes of digits

    // Algorithm:
    // 1. Initialize sum to 0.
    // 2. Copy the original number.
    // 3. While the number is greater than 0:
    //    a. Extract the last digit.
    //    b. Add the cube of the last digit to the sum.
    //    c. Remove the last digit from the number.
    // 4. Compare the sum with the original number.
    // 5. Return true if they are the same, otherwise false.

    while (n > 0) { // Loop until n is 0
        int lastDigit = n % 10; // Extract the last digit
        sum += lastDigit * lastDigit * lastDigit; // Add the cube of the last digit to sum
        n = n / 10; // Remove the last digit
    }

    return sum == original; // Check if sum is equal to the original number
}

int main() {
    int n; // Input number
    cin >> n; // Read input

    // Check if the number is an Armstrong number and print the result
    if (isArmstrongNumber(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0; // Program ended successfully
}
