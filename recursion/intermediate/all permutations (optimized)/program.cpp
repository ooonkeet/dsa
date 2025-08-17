#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int> &nums, vector<vector<int>> &result,int idx){
    if(idx==nums.size()){
        result.push_back(nums);
        return;
    }
    for(int i=idx;i<nums.size();i++){
        swap(nums[i],nums[idx]);
        permutation(nums,result,idx+1);
        swap(nums[i],nums[idx]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<vector<int>> ans;
    permutation(v,ans,0);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}