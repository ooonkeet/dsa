#include <bits/stdc++.h>
class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
    int carry=0,k=0;
    int i=a.length(),j=b.length();
    while(k<i || k<j || carry!=0){
        int sum=0;
        if(k<i && a[i-k-1]=='1'){
            sum=1;
        }
        int d=0;
        if(k<j && b[j-k-1]=='1'){
            d=1;
        }
        ans=to_string((sum+d+carry)%2)+ans;
        carry=(sum+d+carry)/2;
        k++;
    }
    return ans;
    }
};