#include <bits/stdc++.h>
using namespace std;
int getSum(int a, int b) {
    while(b!=0)
    {
        int tmp=(a&b)<<1;
        a=a^b;
        b=tmp;
    }
    return a;
}
int main() {
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<"Their sum is = "<<getSum(a,b)<<endl;
}
//
// Created by Ankit on 14-07-2025.
//
