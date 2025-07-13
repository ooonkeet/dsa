#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums) {
    int n=nums.size();
    int leftProd=1,rightProd=1,ans=nums[0];
    for (int i = 0; i < n; i++) {
        leftProd =leftProd==0?1:leftProd;
        rightProd=rightProd==0?1:rightProd;
        leftProd*=nums[i];
        rightProd*=nums[n-i-1];
        ans=max(ans,max(leftProd,rightProd));
    }
    return ans;
}
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin>>m[i];
    }
    cout<<"Max sub array product is: "<<maxProduct(m);
}
//
// Created by Ankit on 13-07-2025.
//
