#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    int bits=0,tmp=t;
    while(tmp) {
        bits++;
        tmp>>=1;
    }
    int mask=(1<<bits)-1;
    cout<<(t^mask)<<endl;
    return 0;
}