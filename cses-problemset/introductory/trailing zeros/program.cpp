#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int answer=0;
    for(long long m=5;m<=n;m*=5)
        answer+=n/m;
    cout<<answer<<endl;
    return 0;
}