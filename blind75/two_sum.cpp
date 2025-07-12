#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target) {
unordered_map<int, int> mp;
for (int i = 0; i < nums.size(); i++) {
    int cmp = target - nums[i];
    if( mp.count(cmp)) {
        return {mp[cmp],i};
    }
    mp[nums[i]] = i;
}
return {-1,-1};
}
int main() {
    vector<int>nums;
    int n,t;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cout<<"Enter element "<<i+1<<": ";
        cin>>num;
        nums.push_back(num);
    }
    cout<<"Enter target: ";
    cin>>t;
    vector<int> ans = twoSum(nums, t);
    int a=ans[0];
    int b=ans[1];
    if(a!=-1 && b!=-1){
        cout<<"The elements are "<<nums[a]<<" and "<<nums[b]<<endl;
    }
    else
    {
        cout<<"No such element adds up to target"<<endl;
    }
    return 0;
}
//
// Created by Ankit on 12-07-2025.
//
