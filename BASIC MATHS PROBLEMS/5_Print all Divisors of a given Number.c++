#include<bits/stdc++.h>
using namespace std;
void PrintAllDivisor(int n){
    vector<int> ans;
    for(int i=1;i<=n;i++){
        if(n%i==0) cout<<i<<" ";
    }
   
}
int main(){
    int n;
    cin>>n;
    PrintAllDivisor(n);
    
}