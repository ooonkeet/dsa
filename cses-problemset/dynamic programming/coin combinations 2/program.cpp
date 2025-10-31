#include<bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int MOD=1e9+7;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    vector<ll> numberOfCombinations(x+1,0);
    numberOfCombinations[0]=1;
    for (int c : coins) {
        for (int value = c; value <= x; value++) {
            numberOfCombinations[value] = (numberOfCombinations[value] + numberOfCombinations[value - c]) % MOD;
        }
    }

    cout<<numberOfCombinations[x];
}