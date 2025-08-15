#include<bits/stdc++.h>
using namespace std;
void check(int idx,vector<int> v, vector<int> w,int s1,int s2){
    if(idx==v.size()){
        if(s1==s2){
            for(int d:w)
                cout<<d<<" ";
            cout<<endl;
        }
    return;
    }
    w.push_back(v[idx]);
    s1+=v[idx];
    check(idx+1,v,w,s1,s2);
    w.pop_back();
    s1-=v[idx];
    check(idx+1,v,w,s1,s2);
}
int main(){
    int n,k;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    vector<int> w;
    cin>>k;
    check(0,v,w,0,k);
    return 0;
}