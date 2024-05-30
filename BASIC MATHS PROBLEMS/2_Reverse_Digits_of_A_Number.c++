#include<bits/stdc++.h>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int number) {
    int reversed = 0; // Variable to store the reversed number

    // Algorithm:
    // 1. Initialize reversed to 0.
    // 2. While number > 0:
    //    a. Extract the last digit (lastDigit = number % 10).
    //    b. Update reversed (reversed = reversed * 10 + lastDigit).
    //    c. Remove the last digit from number (number = number / 10).
    // 3. Return reversed.

    while (number > 0) { // Loop until number is 0
        int lastDigit = number % 10; // Extract last digit
        reversed = reversed * 10 + lastDigit; // Update reversed
        number = number / 10; // Remove last digit
    }

    return reversed; // Return the reversed number
}

int main() {
    int number; // Input number

    cin >> number; // Read input

    int reversedNumber = reverseNumber(number); // Reverse the number

    cout << reversedNumber; // Output the reversed number

    return 0; // Program ended successfully
}


// Complexity Analysis
// Time Complexity: O(log10N + 1) where N is the input number. The time complexity is determined by the number of digits in the input integer N. In the worst case when N is a multiple of 10 the number of digits in N is log10 N + 1.

// In the while loop we divide N by 10 until it becomes 0 which takes log10N iterations.
// In each iteration of the while loop we perform constant time operations like modulus and division and pushing elements into the vector.
// Space Complexity: O(1) as only a constant amount of additional memory for the reversed number regardless of size of the input number.