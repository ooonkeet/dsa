#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n),dep(n);
        for(int i=0;i<n;i++){
            int te;
            cin>>te;
            arr[i]=te;
        }
        for(int j=0;j<n;j++){
            int tem;
            cin>>tem;
            dep[j]=arr[j]+tem;
        }
        sort(begin(arr),end(arr));
        sort(begin(dep),end(dep));
        int left=0,right=0,rooms=0,maxRooms=0;
        while(left<n && right<n){
            if(arr[left]<dep[right]){
                rooms++;
                maxRooms=max(rooms,maxRooms);
                left++;
            }
            else{
                rooms--;
                right++;
            }
        }
        cout<<maxRooms<<"\n";
    }
}