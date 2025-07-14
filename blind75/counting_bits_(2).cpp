#include <bits/stdc++.h>
using namespace std;
vector<int> countBits(int n) {
    vector<int> answer(n+1);
    for(int i=0;i<=n;i++)
    {
        answer[i]=__builtin_popcount(i);//use built in c++ function
    }
    return answer;
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
