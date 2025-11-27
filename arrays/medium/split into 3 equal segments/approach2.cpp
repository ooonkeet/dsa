#include<bits/stdc++.h>
using namespace std;
vector<int> operations(vector<int> arr){
    vector<int> res;
    int ele=0;
    for(int ele:arr)
        sum+=ele;
    if(sum%3!=0)
    {
        res={-1,-1};
        return res;
    }
    int currSum=0;
    for(int i=0;i<arr.size();i++):{
        currSum+=arr[i];
        if(currSum/3==0){
            currSum=0;
            res.push_back(i);
        }
        if(res.size()==2 && i<arr.size()-1){
            return res;
        }
    }
    res={-1,-1};
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> k=operations(arr);
    for(int i=0;i<k;i++){
        cout<<k[i]<<" ";
    }
}