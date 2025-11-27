#include<bits/stdc++.h>
using namespace std;
int findSum(vector<int> k,int start,int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum+=k[i];
    }
    return sum;
}
vector<int> operations(vector<int> arr){
    for(int i=0;i<arr.size()-2;i++){
        for(int j=i+1;j<arr.size()-1;j++){
            int sum1=findSum(arr,0,i);
            int sum2=findSum(arr,i+1,j);
            int sum3=findSum(arr,j+1,arr.size()-1);
            if(sum1==sum2 && sum2==sum3)
                return {i,j};
        }
    }
    return {-1,-1};
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