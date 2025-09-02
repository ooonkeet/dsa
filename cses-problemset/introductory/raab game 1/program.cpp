#include<bits/stdc++.h>
using namespace std;
bool test_case(){
    int n,a,b;
    cin>>n>>a>>b;
    int ties=n-a-b;
    if(ties<0)
        return false;
    n-=ties;
    if(n<0)
        return false;
    assert(a+b==n);
    if(n>=1 && (a==n || b==n))
        return false;
    cout<<"YES"<<endl;
    for(int i=1;i<=n;i++)
        cout<<i<<" ";
    for(int i=n+1;i<=n+ties;i++)
        cout<<i<<" ";
    cout<<endl;
    for(int i=1;i<=n;i++){
        int x=i+a;
        if(x>n)
            x-=n;
        cout<<x<<" ";
    }
    for(int i=n+1;i<=n+ties;i++)
        cout<<i<<" ";
    cout<<endl;
    return true;
}
int main(){
    int T;
    cin>>T;
    while(T--){
    if(!test_case())
        cout<<"NO"<<endl;
    }
}