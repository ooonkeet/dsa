#include <bits/stdc++.h>
using namespace std;
void g(int i) {
    if (i<1)
        return;
    cout<<i<<endl;
    g(i-1);
}
int main() {
    int n;
    cin>>n;
    g(n);
}