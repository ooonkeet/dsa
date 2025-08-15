#include<bits/stdc++.h>
using namespace std;
int check(int idx,vector<int> v,int s1,int s2){
    //if(s1>s2) return 0;
    //slightly optimised code if array contain only positives.
    if(idx==v.size()){
        if(s1==s2)
            return 1;
        return 0;
    }
    s1+=v[idx];
    int l=check(idx+1,v,s1,s2);
    s1-=v[idx];
    int r=check(idx+1,v,s1,s2);
    return l+r;
}
int main(){
    int n,k;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>k;
    if (check(0,v,0,k)==0)
        cout<<"NO SUCH SUBSEQUENCES EXIST";
    else
        cout<<"NUMBER OF EXISTING SUBSEQUENCE WITH SUM EQUAL TO "<<k<<" = "<<check(0,v,0,k);
    return 0;
}