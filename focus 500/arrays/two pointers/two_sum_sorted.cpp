#include<bits/stdc++.h>
using namespace std;
vector<int> twoSumSorted(vector<int> &arr,int target){
    int left=0,right=arr.size()-1;
    while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return {arr[left],arr[right]};
        }
        else if(sum>target){
            right--;
        }
        else{
            left++;
        }
    }
    return {};
}
int main(){
    int n,target;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>target;
    vector<int> ans=twoSumSorted(arr,target);
    if(!ans.empty()){
        cout<<ans[0]<<","<<ans[1]<<endl;
    }
    else
        cout<<"No pair found";
    return 0;
}