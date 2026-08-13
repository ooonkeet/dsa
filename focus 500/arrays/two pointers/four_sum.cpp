#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> foursum(vector<int>&arr,int tget) {
    vector<vector<int>> res;
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++) {
        if (i>0 && arr[i]==arr[i-1]) {
            continue;
        }
        for(int j=i+1;j<n;j++) {
            if (j>i+1 && arr[j]==arr[j-1]) {
                continue;
            }
            int k=j+1,l=n-1;
            while(k<l) {
                int sum=arr[i]+arr[j]+arr[k]+arr[l];
                if(sum==tget) {
                    res.push_back({arr[i],arr[j],arr[k],arr[l]});
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1]) {
                        k++;
                    }
                    while(k<l && arr[l]==arr[l+1]) {
                        l--;
                    }
                }
                else if (sum<tget) {
                        k++;
                }else{
                    l--;
                }
            }
        }
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int t;
    cin>>t;
    vector<vector<int>> res=foursum(arr,t);
    for (const auto &i:res) {
        for (int x:i) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}