#include <bits/stdc++.h>
using namespace std;
void g(int i,int n) {
    if(i<n)
        g(i+1,n);
    cout<<i<<endl;
    return;
}
int main() {
    int n;
    cin>>n;
    g(1,n);
    return 0;
}