#include <bits/stdc++.h>
using namespace std;
int hammingweight(int n) {
    int cnt=0;
    for(int i=31;i>=0;i--)
    {
         if((n>>i)&1==1)
             cnt++;
     }
    return cnt;
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
