#include<bits/stdc++.h>
using namespace std;
int n;
int a[21];
long long answer=LONG_LONG_MAX;
void f(int i,long long diff){
    if(i==n){
        answer=min(answer,abs(diff));
        return;
    }
    f(i+1,diff+a[i]);
    f(i+1,diff-a[i]);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    f(0,0);
    cout<<answer<<endl;
}