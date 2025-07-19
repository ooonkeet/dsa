#include <bits/stdc++.h>
using namespace std;
int calculate(string s) {
    int n=s.length();
    stack<int>st;
    int number=0,result=0,sign=1;
    for(int i=0;i<n;i++)
    {
        if(isdigit(s[i]))
            number=number*10+(s[i]-'0');
        else if(s[i]=='+')
        {
            result+=(number*sign);
            number=0;
            sign=1;
        }else if(s[i]=='-')
        {
            result+=(number*sign);
            number=0;
            sign=-1;
        }else if(s[i]=='(')
        {
            st.push(result);
            st.push(sign);
            result=0;
            number=0;
            sign=1;
        }else if(s[i]==')'){
            result+=(number*sign);
            number=0;
            int stack_sign=st.top(); st.pop();
            int last_res=st.top();st.pop();
            result*=stack_sign;
            result+=last_res;
        }
    }
    result+=(number*sign);
    return result;
}
int main() {
    string k;
    cout<<"Enter the expression in string format: ";
    cin>>k;
    int result=calculate(k);
    cout<<"The evaluated result of the expression is = "<<result<<endl;
}
//
// Created by Ankit on 18-07-2025.
//
