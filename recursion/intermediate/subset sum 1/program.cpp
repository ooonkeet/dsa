#include<bits/stdc++.h>
using namespace std;
void subsetSum(vector<int> &v,int idx, int sum,vector<int> &ans){
    if(idx==v.size()){
        ans.push_back(sum);
        return;
    }
    sum+=v[idx];
    subsetSum(v,idx+1,sum,ans);
    sum-=v[idx];
    subsetSum(v,idx+1,sum,ans);
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans;
    subsetSum(v,0,0,ans);
    sort(ans.begin(),ans.end());
    for(int a: ans)
        cout<<a<<" ";
    return 0;
}