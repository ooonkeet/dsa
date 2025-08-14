#include <bits/stdc++.h>
using namespace std;
void g(int i,int n) {
    if(i>n) {
        return;
    }
    cout<<i<<endl;
    g(i+1,n);
}
int main() {
    int n;
    cin>>n;
    g(1,n);
    return 0;
}