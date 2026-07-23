#include<bits/stdc++.h>
using namespace std;
int recur(int idx, vector<int> &heights){
    if(idx==0)
        return 0;
    int left=recur(idx-1,heights)+abs(heights[idx]-heights[idx-1]);
    int right=INT_MAX;
    if(idx>1)
        right=recur(idx-2,heights)+abs(heights[idx]-heights[idx-2]);
    return min(left,right);
}
int main(){
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++)
        cin>>heights[i];
    cout<<"Minimum jump:- "<<recur(n-1,heights)<<endl;
}