#include <bits/stdc++.h>
using namespace std;
stack<pair<int,int>> st;
int next(int price) {
    int span=1;
    while(!st.empty()&&st.top().first<=price){
        span+=st.top().second;
        st.pop();
    }
    st.push({price,span});
    return span;
}
vector<int> stockeval(vector<int>&k) {
    vector<int> v;
    for (int ch:k) {
        v.push_back(next(ch));
    }
    return v;
}
int main() {
    int n;
    cout<<"Enter number of stocks: ";
    cin>>n;
    vector<int> stocks(n);
    for(int i=0;i<n;i++) {
        cout<<"Enter stock #"<<i+1<<": ";
        cin>>stocks[i];
    }
    vector<int> result=stockeval(stocks);
    cout<<"The span of stock is: ";
    for (int ch:result)
        cout<<ch<<" ";
    return 0;
}
//
// Created by Ankit on 18-07-2025.
//
