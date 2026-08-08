#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n;
    cin>>n;
    n=n%26;
    for(int i=0;i<s.length();i++) {
        if (s[i]>='a' && s[i]<='z')
            s[i]=char((s[i]-'a'+n)%26+'a');
        else if (s[i]>='A' && s[i]<='Z')
            s[i]=char((s[i]-'A'+n)%26+'A');
    }
    cout<<s<<endl;
    return 0;
}