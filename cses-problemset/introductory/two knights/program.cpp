#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max_n;
    cin>>max_n;
    for(long long i=1;i<=max_n;i++)
    {
        long long size=i*i;
        long long allWays=size*(size-1)/2;
        long long badWays=0;
        badWays+=8*(i-4)*(i-4);
        badWays+=6*(i-4)*4;
        badWays+=4*(i-3)*4;
        badWays+=3*8;
        badWays+=2*4;
        badWays/=2;
        cout<<allWays-badWays<<endl;
    }
    return 0;
}