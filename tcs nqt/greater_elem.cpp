#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int maxSeen=v[0];
    cout<<v[0]<<"  ";
    for(int i=1;i<n;i++) {
        if (v[i]>maxSeen) {
            cout<<v[i]<<"  ";
            maxSeen=v[i];
        }
    }
    return 0;
}