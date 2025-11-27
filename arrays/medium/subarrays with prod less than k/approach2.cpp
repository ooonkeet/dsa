#include<bits/stdc++.h>
using namespace std;
int operation(vector<int> v,long long limit){
    int cnt=0;
    long long product=1;
    for(int start=0,end=0;end<n;end++){
        product*=v[end];
        while(start<=end && product>=limit){
            product/=v[start++];
        }
        if(product<limit){
            int tmp=end-start+1;
            cnt+=tmp;
        }
    }
    return cnt;
}
    int main(){
        int n;
        long long l;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cin>>l;
        operation(v,l);
    }