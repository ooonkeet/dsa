#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,xum=0;
    cin>>n;
    for(int k=1;k<=n;k++)
        xum^=k;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin>>x;
        xum^=x;
    }
    cout<<xum;
}
