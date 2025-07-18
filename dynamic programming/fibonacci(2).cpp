#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    vector<int>dp(100,-1);
    dp[1]=1;
    dp[2]=1;
    for(int i=3;i<=n;i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Term of Fibonacci sequence: "<<fibo(n);
}
//
// Created by Ankit on 18-07-2025.
//
