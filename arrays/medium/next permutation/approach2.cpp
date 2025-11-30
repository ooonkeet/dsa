#include<bits/stdc++.h>
using namespace std;
int nextp(vector<int> &v){
    int pivot=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1])
        {
            pivot=i;
            break;
        }
        if(pivot==-1){
            reverse(v.begin(),v.end());
            return;
        }
        for(int i=n-1;i>=pivoy;i--){
            if(v[i]>v[pivot]){
                swap(v[i],v[pivot]);
                break;
            }
        }
    }
    reverse(v.begin()+pivot+1,v.end());
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextp(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}