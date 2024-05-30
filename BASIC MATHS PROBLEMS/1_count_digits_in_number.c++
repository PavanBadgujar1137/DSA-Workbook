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