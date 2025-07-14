#include <bits/stdc++.h>
using namespace std;
int hammingweight(int n) {
    return __builtin_popcount(n);
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Number of set bits: "<<hammingweight(n)<<endl;
}
//
// Created by Ankit on 14-07-2025.
//
