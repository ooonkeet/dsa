#include <bits/stdc++.h>
using namespace std;
/* vector<int> v;
void solve(int left,int right) {
    if (left>=right) {
        return;
    }
    swap(v[left],v[right]);
    solve(left+1,right-1);
}
int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int inp;
        cin>>inp;
        v.push_back(inp);
    }
    for (int i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
    solve(0,n-1);
    for (int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
// By using two pointers
*/
void solve(int i,vector<int>&v,int n) {
    if (i>=n/2)
        return;
    swap(v[i],v[n-i-1]);
    solve(i+1,v,n);
}
int main() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for (int k:v)
        cout<<k<<" ";
    cout<<endl;
    solve(0,v,n);
    for (int y:v)
        cout<<y<<" ";
    return 0;
}
// by using only 1 variable