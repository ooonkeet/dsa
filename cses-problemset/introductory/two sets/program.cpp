#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>a,b;
    long long A=0,B=0;
    for(int x=t;x>=1;--x){
        if(A>B){
            b.push_back(x);
            B+=x;
        }
        else{
            a.push_back(x);
            A+=x;
        }
    }
    if(A==B){
        cout<<"YES"<<endl;
        cout<<a.size()<<endl;
        for(int x:a){
            cout<<x<<" ";
        }
        cout<<endl;
        cout<<b.size()<<endl;
        for(int x:b){
            cout<<x<<" ";
        }
    }
    else
        cout<<"NO"<<endl;
    return 0;
}