#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long sum=1;
    for(int i=0;i<n && sum>=v[i];i++)
        sum+=v[i];
    cout<<sum<<endl;
    return 0;
}