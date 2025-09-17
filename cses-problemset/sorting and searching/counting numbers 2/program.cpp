#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int> values(n+1);
    vector<int> positions(n+1);
    for(int i=1;i<=n;i++){
        cin>>values[i];
        positions[values[i]]=i;
    }
    int answer=1;
    for(int i=1;i<n;i++){
        answer+=(positions[i]>positions[i+1]);
    }
    int l,r;
    set<pair<int,int>>updatedPairs;
    while(q--){
        cin>>l>>r;
        if(values[l]+1<=n){
            updatedPairs.insert(make_pair(values[l],values[l]+1));
        }
        if(values[l]-1>=1){
            updatedPairs.insert(make_pair(values[l]-1,values[l]));
        }
        if(values[r]+1<=n){
            updatedPairs.insert(make_pair(values[r],values[r]+1));
        }
        if(values[r]-1>=1){
            updatedPairs.insert(make_pair(values[r]-1,values[r]));
        }
        for(pair<int,int> i:updatedPairs){
            answer-=positions[i.first]>positions[i.second];
        }
        swap(values[l],values[r]);
        positions[values[l]]=l;
        positions[values[r]]=r;
        for(pair<int,int> i:updatedPairs){
            answer+=positions[i.first]>positions[i.second];
        }
        cout<<answer<<endl;
        updatedPairs.clear();
    }
    return 0;
}