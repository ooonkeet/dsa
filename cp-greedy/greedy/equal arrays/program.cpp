#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        long long s1=0,s2=0;
        cin>>n>>m;
        vector<int>v(n),vec(m);
        for(int i=0;i<n;i++){
            int te;
            cin>>te;
            v[i]=te;
            s1+=te;
        }
        for(int i=0;i<m;i++){
            int tem;
            cin>>tem;
            vec[i]=tem;
            s2+=tem;
        }
        if(s1!=s2)
            cout<<-1<<"\n";
        else{
            int i=0,j=0,maxLen=0;
            while(i<n && j<m){
                long long sumA=v[i];
                long long sumB=vec[j];
                while(sumA!=sumB){
                    if(sumA<sumB){
                        i++;
                        sumA+=v[i];
                    }else{
                        j++;
                        sumB+=vec[j];
                    }
                }
                maxLen++;
                i++;
                j++;
            }
            cout<<maxLen<<"\n";
        }
    }
    return 0;
}