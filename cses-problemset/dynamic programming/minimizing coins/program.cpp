#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e9
#define ln '\n'
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> coins(n);
    vector<int>numberOfCoins(x+1,INF);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    numberOfCoins[0]=0;
    for(int value=0;value<=x;value++){
        for(int j=0;j<n;j++){
            if(value-coins[j]>=0){
                numberOfCoins[value]=min(numberOfCoins[value],numberOfCoins[value-coins[j]]+1);
            }
        }
    }
    cout<<(numberOfCoins[x]==INF?-1:numberOfCoins[x]);
}
