#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is a palindrome
bool isNumberPalindrome(int n) {
    int rev = 0; // To store the reversed number
    int original = n; // Store the original number

    // Algorithm:
    // 1. Initialize rev to 0.
    // 2. Copy the original number.
    // 3. While the number is greater than 0:
    //    a. Extract the last digit.
    //    b. Update rev by adding the last digit.
    //    c. Remove the last digit from the number.
    // 4. Compare the reversed number with the original number.
    // 5. Return true if they are the same, otherwise false.

    while (n > 0) { // Loop until n is 0
        int lastDigit = n % 10; // Extract the last digit
        rev = rev * 10 + lastDigit; // Update the reversed number
        n = n / 10; // Remove the last digit
    }

    return rev == original; // Check if reversed number is equal to the original
}

int main() {
    int n; // Input number
    cin >> n; // Read input

    // Check if the number is a palindrome and print the result
    if (isNumberPalindrome(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0; // Program ended successfully
}
// Time complexity : O(log10n+1)