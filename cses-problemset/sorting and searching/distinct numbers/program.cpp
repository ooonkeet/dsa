#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1;
    cin>>n;
    vector<int> v(n);
    for (int &a:v)
        cin>>a;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}