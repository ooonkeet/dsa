#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int l,int r){
    while(l<=r){
        if(s[l++]!=s[r--])
            return false;
    }
    return true;
}
void func(string s,int idx,vector<string> &v,vector<vector<string>> &ans){
    if(idx==s.size()){
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<s.size();i++){
        if(isPalindrome(s,idx,i)){
            v.push_back(s.substr(idx,i-idx+1));
            func(s,i+1,v,ans);
            v.pop_back();
        }
    }
}
int main(){
    string s;
    cin>>s;
    vector<string> v;
    vector<vector<string>> ans;
    func(s,0,v,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}