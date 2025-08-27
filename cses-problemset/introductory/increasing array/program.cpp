#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    long long mx=0,sum=0;
    cin>>N;
    vector<long long> arr(N);
    //cin>>arr[0];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);
        sum+=(mx-arr[i]);
    }
    cout<<sum<<endl;
    return 0;
}
