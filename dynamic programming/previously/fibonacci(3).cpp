#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    vector<int>dp(100,-1);
    if(n<=2){
        return 1;
    }
    if (dp[n]!=-1)
        return dp[n];
    dp[n]=fibo(n-1)+fibo(n-2);
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
