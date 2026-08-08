#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,j=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
        if (v[i]==0)
            swap(v[i],v[j++]);
    sort(v.begin()+j,v.end(),greater<int>());

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}