#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,enc="";
    cin>>s;
    int n=s.length();
    //sort(s.begin(),s.end());
    for(int i=0;i<n;i++) {
        int count=1;
        while (i<n-1 && s[i]==s[i+1]) {
            count++;
            i++;
        }
        enc+=s[i];
        enc+=to_string(count);
    }
    cout<<enc;
    return 0;
}