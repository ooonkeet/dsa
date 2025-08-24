#include<bits/stdc++.h>
using namespace std;
int countDistinctWays(int nStairs) {
    int mod=1e9+7;
    int prev2 = 1;
    int prev = 1;
    for (int i = 2; i <= nStairs; ++i) {
        int curr=(prev2+prev)%mod;
        prev2=prev;
        prev=curr;
    }
    return prev;
}
int main() {
    int t;
    cin>>t;
    while(t--) {
        int nStairs;
        cin>>nStairs;
        cout<<countDistinctWays(nStairs)<<endl;
    }
}