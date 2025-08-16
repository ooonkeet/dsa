#include<bits/stdc++.h>
using namespace std;
void findCombination(int ind,int target,vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
    if(ind==arr.size()){
        if(target==0)
            ans.push_back(ds);
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombination(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();
    }
    findCombination(ind+1,target,arr,ans,ds);
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
    findCombination(0,target,arr,ans,ds);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}