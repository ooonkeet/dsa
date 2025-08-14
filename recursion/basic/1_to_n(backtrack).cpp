#include <bits/stdc++.h>
using namespace std;
void g(int i) {
    if (i<1)
        return;
    g(i-1);
    cout<<i<<endl;
}
int main() {
    int n;
    cin>>n;
    g(n);
}