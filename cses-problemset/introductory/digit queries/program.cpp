#include<bits/stdc++.h>
using namespace std;
void test_Case(){
    long long k;
    cin>>k;
    long long cnt=9;
    long long skipped=0;
    for(int len=1;true;len++){
        if(k>len*cnt){
            k-=len*cnt;
            skipped+=cnt;
        }
        else{
            long long skip=(k-1)/len;
            skipped+=skip;
            k-=skip*len;
            long long x=skipped+1;
            cout<<to_string(x)[k-1]<<endl;
            return;
        }
        cnt*=10;
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        test_Case();
    }
}