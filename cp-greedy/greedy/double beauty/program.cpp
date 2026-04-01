#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long sum=0;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v[i]=temp;
        }
        sort(begin(v),end(v));
        for(int i=n-1;i>=n-k;i--)
            sum+=(v[i]*2LL);
        cout<<sum<<"\n";
    }
    return 0;
}