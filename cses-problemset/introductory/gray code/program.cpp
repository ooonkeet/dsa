#include<bits/stdc++.h>
using namespace std;
vector<string> solve(int n){
    if(n==1)
        return {"0","1"};
    vector<string> a=solve(n-1);
    vector<string>b=a;
    reverse(b.begin(),b.end());
    for(string &s:a){
        s+='0';
    }
    for(string &s:b){
        s+='1';
    }
    a.insert(a.end(),b.begin(),b.end());
    return a;
}
int main(){
    int n;
    cin>>n;
    vector<string> answer=solve(n);
    for(string &s:answer){
        cout<<s<<endl;
    }
}