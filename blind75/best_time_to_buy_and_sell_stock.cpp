#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> prices) {
    int maxProfit = 0;
    int minPrice=INT_MAX;
    for(int i=0;i<prices.size();i++) {
        minPrice = min(minPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    return maxProfit;
}
int main() {
    vector<int> prices;
    int n;
    cout<<"Enter number of prices: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) {
        int x;
        cout<<"Enter price: ";
        cin>>x;
        v.push_back(x);
    }
    if (maxProfit(v)==0)
        cout<<"No profit";
    else
        cout<<"Profit = "<<maxProfit(v);
    return 0;
}
//
// Created by Ankit on 12-07-2025.
//
