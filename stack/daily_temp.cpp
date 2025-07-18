#include <bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n=temperatures.size();
    vector<int> result(n);
    stack<int>st;
    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty()&&temperatures[i]>=temperatures[st.top()]){
            st.pop();
        }
        if(st.empty())
        {
            result[i]=0;
        }
        else{
            result[i]=st.top()-i;
        }
        st.push(i);
    }
    return result;
}
int main() {
    int n;
    cout<<"Enter number of days: ";
    cin>>n;
    vector<int> temperatures(n);
    for (int i=0; i<n; i++) {
        cout<<"Enter temperatures for day "<<i+1<<":- ";
        cin>>temperatures[i];
    }
    vector<int> result=dailyTemperatures(temperatures);
    cout<<"No of days you've to wait for temp to get warmer is = ";
    for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
    return 0;
}
//
// Created by Ankit on 18-07-2025.
//
