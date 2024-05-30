#include<bits/stdc++.h>
using namespace std;
bool isPrimeOrNot(int n){
    int N=n;
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%1==0 && n%i==0){
            cnt++;
        }
    }
    return cnt==2;
}
int main(){
    int n;
    cin>>n;
    int ans=isPrimeOrNot(n);
    if(ans) cout<<"YES";
    else cout<<"NO";
}