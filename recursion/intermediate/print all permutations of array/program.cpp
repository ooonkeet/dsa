#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int> &v,vector<int> &ds, vector<vector<int>> &ans,int freq[])
{
    if(v.size()==ds.size())
    {
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<v.size();i++)
    {
        if(!freq[i])
        {
            ds.push_back(v[i]);
            freq[i]=1;
            permutation(v,ds,ans,freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> ds;
    vector<vector<int>> ans;
    int freq[n];
    for(int i=0;i<n;i++)
        freq[i]=0;
    permutation(v,ds,ans,freq);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}