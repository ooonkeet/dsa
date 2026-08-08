#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int min=20;
    if (n<=5)
        cout<<min<<" minutes"<<endl;
    else {
        min+=4*(n-5);
        cout<<min<<" minutes"<<endl;
    }
    return 0;
}