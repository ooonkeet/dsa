#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
    if(n==0||n==1)
        return 1;
    return n*fact(n-1);
}
int main() {
    int t;
    cin>>t;
    cout<<fact(t)<<endl;
}