#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& nums) {
    int n=nums.size();
    sort(begin(nums),end(nums));
    int res=n;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(nums[mid]>mid){
            res=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    return res;
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
