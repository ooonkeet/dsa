#include<bits/stdc++.h>
using namespace std;
void subsetSum(vector<int> &nums, vector<int> &ds,vector<vector<int>> &ans, int idx)
{
    ans.push_back(ds);
    for(int i=idx;i<nums.size();i++){
        if(i!=idx && nums[i]==nums[i-1])
            continue;
        ds.push_back(nums[i]);
        subsetSum(nums,ds,ans,i+1);
        ds.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> dp;
    vector<vector<int>> ans;
    sort(v.begin(),v.end());
    subsetSum(v,dp,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}