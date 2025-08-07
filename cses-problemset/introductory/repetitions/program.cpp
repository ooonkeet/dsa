#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int curr=1,best=1;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            curr++;
        else
            curr=1;
    best=max(best,curr);
    }
    cout<<best<<endl;
    return 0;
}