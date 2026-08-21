#include<bits/stdc++.h>
using namespace std;
int recursion(int idx,vector<int> &arr,int k){
    if(idx==0){
        return 0;
    }
    int minSteps=INT_MAX;
    for(int i=1;i<=k;i++){
        if(idx-i>=0){
            int jump=recursion(idx-i,arr,k)+abs(arr[idx]-arr[idx-i]);
            minSteps=min(minSteps,jump);
        }
    }
    return minSteps;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<recursion(n-1,arr,k)<<endl;
}