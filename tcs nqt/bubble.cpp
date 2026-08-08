#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,sw=0;
    bool isSwap;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n-1;i++) {
        isSwap=false;
        for(int j=0;j<n-i-1;j++) {
            if (v[j]>v[j+1]) {
                int t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
                sw+=1;
                isSwap=true;
            }
        }
        if(!isSwap)
            break;
    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    cout<<sw<<endl;
    return 0;
}