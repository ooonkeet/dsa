#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums) {
    int left=0,right=nums.size()-1;
    while(left<right) {
        int mid=left+(right-left)/2;
        if (nums[mid]>nums[right]) {
            left=mid+1;
        }
        else {
            right=mid;
        }
    }
    return nums[left];
}
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cout<<"Enter element as rotated sorted array: "<<i+1<<": ";
        cin>>m[i];
    }
    cout<<"Max sub array sum is: "<<findMin(m);
}
//
// Created by Ankit on 13-07-2025.
//
