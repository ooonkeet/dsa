#include <bits/stdc++.h>
using namespace std;
/*
void solve(int i,string &s,int len) {
    if (i>=len/2)
        return;
    swap(s[i],s[len-i-1]);
    solve(i+1,s,len);
}
int main() {
    string s,duplicate;
    cin>>s;
    int len=s.length();
    duplicate=s;
    solve(0,duplicate,len);
    if (duplicate==s) {
        cout<<"PALINDROME WORD = "<<s<<endl;
    }
    else {
        cout<<"NOT PALINDROME WORD = "<<s<<endl;
    }
}
//checking by reversing
*/
bool solve(int i,string &s) {
    if (i>=s.size()/2)
        return true;
    if (s[i]!=s[s.size()-1-i])
        return false;
    return solve(i+1,s);
}
int main() {
    string s;
    cin>>s;
    if (!solve(0,s))
        cout<<"NOT PALINDROME WORD = "<<s<<endl;
    else
        cout<<"PALINDROME WORD = "<<s<<endl;
    return 0;
}
//works shorter