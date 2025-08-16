#include<bits/stdc++.h>
using namespace std;
void findCombination(int ind,int target,vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])
            continue;
        if(arr[i]>target)
            break;
        ds.push_back(arr[i]);
        findCombination(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
}
int main(){
    int n,target;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>target;
    vector<vector<int>> ans;
    vector<int> ds;
    sort(arr.begin(),arr.end());
    findCombination(0,target,arr,ans,ds);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}