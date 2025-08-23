#include <bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
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
