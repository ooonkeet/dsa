#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[i]=temp;
        }
        for(int i=0;i<n && k>0;i++){
            int pos=i;
            for(int j=i+1;j<n && j<=i+k;j++){
                if(arr[j]<arr[pos])
                    pos=j;
            }
            for(int j=pos;j>i;j--){
                swap(arr[j],arr[j-1]);
            }
            k=k+i-pos;
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}