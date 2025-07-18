#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s) {
    stack<char>k;
    string m="";
    for(int i=0;i<s.length();i++)
    {
        if(k.empty()||k.top()!=s[i])
            k.push(s[i]);
        else
            k.pop();
    }
    while(!k.empty())
    {
        m=m+k.top();
        k.pop();
    }
    reverse(m.begin(),m.end());
    return m;
}
int main()
{
    string s;
    cout<<"Enter string: ";
    cin>>s;
    cout<<"String with removed duplicates:"<<removeDuplicates(s)<<endl;
    return 0;
}
//
// Created by Ankit on 18-07-2025.
//
