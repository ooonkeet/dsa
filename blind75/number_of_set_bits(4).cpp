#include <bits/stdc++.h>
using namespace std;
int hammingweight(int n) {
        int cnt=0;

        while(n!=0)
        {
                cnt+=(n%2);
                n=n/2;
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
