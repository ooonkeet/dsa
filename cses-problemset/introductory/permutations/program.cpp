#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1;i<=n;i+=2)
    {
        v.push_back(i);
    }
    for(int i=2;i<=n;i+=2)
    {
        v.push_back(i);
    }
    if(n==4)
        v={3,1,4,2};
    for(int i=0;i<n-1;i++)
    {
        if(abs(v[i]-v[i+1])==1){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
    }
    for(int x:v){
        cout<<x<<" ";
    }
}