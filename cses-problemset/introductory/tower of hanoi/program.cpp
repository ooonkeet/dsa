#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
void solve(int n,int left,int right){
    if(n==0)
        return;
    int other=6-left-right;
    solve(n-1,left,other);
    v.emplace_back(left,right);
    solve(n-1,other,right);
}
int main(){
    int n;
    cin>>n;
    solve(n,1,3);
    cout<<v.size()<<endl;
    for(auto[a,b]:v)
        cout<<a<<" "<<b<<endl;
}