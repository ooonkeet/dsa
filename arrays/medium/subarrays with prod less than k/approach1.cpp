#include<bits/stdc++.h>
using namespace std;
int operation(vector<int> v,int limit){
    int cnt=0;
    for(int i=0;i<v.size();i++){
        int product=v[i];
        if(v[i]<limit)
            cnt++;
        for(int j=i+1;j<v.size();j++){
            product*=v[j];
            if(product<limit){
                cnt++;
            else
                break;
        }
    }
    return cnt;
}
int main(){
    int n,l;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>l;
    operation(v,l);
}