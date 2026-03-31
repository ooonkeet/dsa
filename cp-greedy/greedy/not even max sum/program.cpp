#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,minOd=INT_MAX;;
        cin>>n;
        long long sum=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp%2==1)
                minOd=min(minOd,temp);
            sum+=temp;
        }
        if(sum%2==0 && minOd!=INT_MAX)
            sum=sum-minOd;
        if(minOd==INT_MAX && sum%2==0)
            cout<<0<<"\n";
        else
            cout<<sum<<"\n";
    }
    return 0;
}