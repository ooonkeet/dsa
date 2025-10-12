#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long currSum=0,maxSum=0;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0)
            currSum=0;
        maxSum=max(maxSum,currSum);
    }
    if (maxSum==0) {
        sort(arr.begin(),arr.end());
        maxSum=arr[n-1];
    }
    cout<<maxSum<<endl;
    return 0;
}
