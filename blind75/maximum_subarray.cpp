#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int maxSum=nums[0];
    int currSum=nums[0];
    for(int i=1;i<nums.size();i++)
    {
        currSum=max(nums[i],nums[i]+currSum);
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
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
    cout<<"Max sub array sum is: "<<maxSubArray(m);
}
//
// Created by Ankit on 12-07-2025.
//
