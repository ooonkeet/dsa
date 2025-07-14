#include <bits/stdc++.h>
using namespace std;
vector<int> countBits(int n) {
    vector<int> result(n+1);
    if(n==0)
        return result;
    result[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            result[i]=result[i/2]+1;
        else
            result[i]=result[i/2];
    }
    return result;
}
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    vector<int> v=countBits(n);
    cout<<"Number of bits in sequence is: ";
    for (int o:v)
        cout<<o<<"  ";
}
//
// Created by Ankit on 14-07-2025.
//
