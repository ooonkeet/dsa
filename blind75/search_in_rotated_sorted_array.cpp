#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target) {
    int left=0,right=nums.size()-1;
    while(left<=right) {
        int mid=left+(right-left)/2;
        if (nums[mid]==target) {
            return mid;
        }
        if (nums[left]<=nums[mid]) {
            if (nums[left]<=target && target<=nums[mid])
                right=mid-1;
            else
                left=mid+1;
        }
        else {
            if (nums[mid]<=target && target<=nums[right])
                left=mid+1;
            else
                right=mid-1;
        }
    }
    return -1;
}
int main() {
    int n,target;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cout<<"Enter element as rotated sorted array "<<i+1<<": ";
        cin>>m[i];
    }
    cout<<"Enter element to search: ";
    cin>>target;
    if (search(m,target)==-1)
        cout<<"Element not found";
    else
    cout<<"Enter element is present in index: "<<search(m,target);
}
//
// Created by Ankit on 13-07-2025.
//
