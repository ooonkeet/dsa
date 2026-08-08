#include <bits/stdc++.h>
using namespace std;
int main() {
    int board,dest,n;
    cin>>board>>dest>>n;
    int clock=abs(dest-board);
    int shor=min(clock,n-clock);
    cout<<shor*10<<endl;;
    return 0;
}