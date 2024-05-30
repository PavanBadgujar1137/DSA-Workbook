#include<bits/stdc++.h>
using namespace std;
int countDigitsInNumber(int N){
    int cnt=0;
    while(N>0){
        // int lastDigit=N%10
        //
        cnt++;
        N=N/10;
    }
    return  cnt;
}
int main(){
    int N;
    cin>>N;
    int ans= countDigitsInNumber(N);
    cout<<ans;
}


// Calculate the count of digits in 'n'..
// using logarithmic operation log10(n) + 1.
int countDigits(int n){
    // Initialize a variable 'cnt' to
    // store the count of digits.
    int cnt = (int)(log10(n)+1);

    // The expression (int)(log10(n)+1)
    // calculates the number of digits in 'n'
    // and casts it to an integer.
    
    // Adding 1 to the result accounts
    // for the case when 'n' is a power of 10,
    // ensuring that the count is correct.
   
    // Finally, the result is cast
    // to an integer to ensure it is rounded
    // down to the nearest whole number.
    
    // Return the count of digits in 'n'.
    return cnt;
}




int main() {
    int N = 329823;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}