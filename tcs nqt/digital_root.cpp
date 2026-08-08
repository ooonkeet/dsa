#include <bits/stdc++.h>
using namespace std;
int digital(int n) {
    if (n==0)
        return 0;
    if (n%9==0)
        return 9;
    return (n%9);
}
int main() {
    int n,c=0,tmp;
    cin >> n;
    cout<<digital(n);
    return 0;
}