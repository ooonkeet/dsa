#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i]==nums[i-1])
            continue;
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum<0)
                j++;
            else if(sum>0)
                k--;
            else{
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1])
                    j++;
                while(j<k && nums[k]==nums[k+1])
                    k--;
            }
        }
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
    vector<vector<int>> ans=threeSum(m);
    cout<<"The three sums are: ";
    for (const auto &row:ans) {
        for (const auto &col:row)
            cout<<col<<" ";
        cout<<endl;
    }
    return 0;
}
//
// Created by Ankit on 13-07-2025.
//
