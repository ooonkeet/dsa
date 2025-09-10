#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> desired(n);
    vector<int> available(m);
    for(int i=0;i<n;i++) {
        cin>>desired[i];
    }
    for(int i=0;i<m;i++) {
        cin>>available[i];
    }
    sort(desired.begin(),desired.end());
    sort(available.begin(),available.end());
    int i=0,j=0,getapp=0;
    while(i<m&&j<n){
        if(abs(desired[j]-available[i])<=k){
            getapp++;
            i++;
            j++;
            continue;
        }
        if (desired[j]>available[i]) {
            i++;
            continue;
        }
        j++;
    }
    cout<<getapp<<endl;
    return 0;
}