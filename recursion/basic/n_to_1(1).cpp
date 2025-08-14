#include <bits/stdc++.h>
using namespace std;
void h(int i) {
    if (i<1) {
        return;
    }
    cout<<i<<endl;
    h(i-1);
}
int main() {
    int n;
    cin>>n;
    h(n);
    return 0;
}