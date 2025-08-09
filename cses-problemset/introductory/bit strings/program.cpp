#include<bits/stdc++.h>
using namespace std;
int MOD=1e9+7;
int main()
{
    int n;
    cin>>n;
    int answer=1;
    for(int i=1;i<=n;i++)
        answer=(2*answer)%MOD;
    cout<<answer<<endl;
    return 0;
}