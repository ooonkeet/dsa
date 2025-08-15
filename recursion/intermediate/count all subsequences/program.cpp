#include<bits/stdc++.h>
using namespace std;
void recursive(int idx,vector<int> &subs, vector<int> &arr){
    if(idx>=arr.size()){
        if (subs.size()==0) {
            cout<<"[]";
            cout<<endl;
            return;
        }
        for(int a: subs)
            cout<<a<<" ";
        cout<<endl;
        return;
    }
    subs.push_back(arr[idx]);//pick one or left hand
    recursive(idx+1,subs,arr);//pick one or left hand
    subs.pop_back();//pick one or left hand
    recursive(idx+1,subs,arr);//non pick one or right hand
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> subs;
    recursive(0,subs,arr);
    return 0;
}