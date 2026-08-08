#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n=s.length();
    int sum=0;
    for(int i=0;i<n;i++) {
        if (s[i]>='0' && s[i]<='9') {
            sum+=s[i]-'0';
        }
    }
    if (sum%2==0)
        cout<<500<<endl;
    else
        cout<<1000<<endl;
    return 0;
}