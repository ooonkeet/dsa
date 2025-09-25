#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int &a:v)
        cin>>a;
    sort(v.begin(),v.end());
    auto pos=unique(v.begin(),v.end());
    cout<<pos-v.begin()<<endl;
    return 0;
}