#include <bits/stdc++.h>
using namespace std;
int search(vector<int>v,int tget) {
    int left=0,rig=v.size()-1;
    while(left<=rig) {
        int mid=left+(rig-left)/2;
        if(v[mid]==tget) {
            return mid;
        }
        if (v[left]==v[mid] && v[mid]==v[rig]) {
            left++;
            rig--;
            continue;
        }
        if (v[left]<=v[mid]) {
            if (v[left]<=tget && tget<v[mid])
                rig=mid-1;
            else
                left=mid+1;
        }
        else {
            if (v[mid]<tget && tget<=v[rig])
                left=mid+1;
            else
                rig=mid-1;
        }
    }
    return -1;
}
int main() {
    int n,target;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    cin>>target;
    cout<<search(v,target)+1;
    return 0;
}