#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=0,r=n-1,cnt=0;
    while(l<=r){
        if (v[l]+v[r]<=x) {
            l++;
            r--;
            cnt++;
        }
        else {
            r--;
            cnt++;
        }
    }
    cout<<cnt<<endl;
}