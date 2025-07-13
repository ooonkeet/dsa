#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int>& height) {
    int left=0,right=height.size()-1,maxArea=0;
    while(left<right)
    {
        int area=min(height[left],height[right])*(right-left);
        maxArea=max(area,maxArea);
        if(height[left]<height[right])
            left++;
        else
            right--;
    }
    return maxArea;
}
int main() {
    int n;
    cout<<"Enter length of heights: ";
    cin>>n;
    vector<int> m(n);
    for (int i = 0; i < n; i++) {
        cout<<"Enter height "<<i+1<<": ";
        cin>>m[i];
    }
    cout<<"Maximum water held: "<<maxArea(m)<<"units";
}
//
// Created by Ankit on 13-07-2025.
//
