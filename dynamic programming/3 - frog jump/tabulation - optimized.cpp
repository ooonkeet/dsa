#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> heights(n);
    for(int i=0;i<n;i++)
        cin>>heights[i];
    int prev=0,prev2=0;
    for (int idx=1;idx<n;idx++) {
        int left=prev+abs(heights[idx]-heights[idx-1]);
        int right=INT_MAX;
        if(idx>1)
            right=prev2+abs(heights[idx]-heights[idx-2]);
        int curr=min(left,right);
        prev2=prev;
        prev=curr;
    }
    cout<<"Minimum jump:- "<<prev<<endl;
}