#include <bits/stdc++.h>
using namespace std;
void sum(int s,int n) {
    if (n<1) {
        cout<<s;
        return;
    }
    sum(s+n,n-1);
}
int main() {
    int n;
    cin>>n;
    sum(0,n);
    return 0;
}