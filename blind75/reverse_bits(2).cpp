#include <bits/stdc++.h>
using namespace std;
uint32_t reverseBits(uint32_t n) {
    uint32_t ans = 0;
    for(int i = 0; i < 32; i++) {
        ans <<= 1;
        ans |= (n & 1);
        n >>= 1;
    }
    return ans;
}
int main() {
    uint32_t n;
    cout<<"Enter bit configuration: ";
    cin>>n;
    cout<<"Reverse of the number in std form: "<<reverseBits(n);
}
//
// Created by Ankit on 14-07-2025.
//
