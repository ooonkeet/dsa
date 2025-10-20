#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long minDiff=0;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        minDiff+=abs(arr[i]-arr[n/2]);
    }
    cout<<minDiff<<endl;
    return 0;
}

