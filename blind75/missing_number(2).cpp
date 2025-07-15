#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int result=n;
    for(int i=0;i<n;i++)
    {
        result^=i;
        result^=nums[i];
    }
    return result;
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements from 0 to that number but miss a number purposefully."<<endl;
    for(int i=0;i<n;i++) {
        cout<<"Enter element: ";
        cin>>nums[i];
    }
    cout<<"The missing number is: "<<missingNumber(nums)<<endl;
}
//
// Created by Ankit on 14-07-2025.
//
