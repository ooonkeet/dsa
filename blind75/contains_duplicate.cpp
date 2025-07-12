#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int> &v) {
    unordered_set<int> s;
    for(int n:v) {
        if (s.find(n) != s.end()) {
            return true;
        }
        s.insert(n);
    }
    return false;
}
int main() {
    vector<int> v;
    int siz;
    cout<<"Enter size of array: ";
    cin>>siz;
    for (int i = 0; i < siz; i++) {
        int a;
        cout<<"Enter element "<<i+1<<": ";
        cin>>a;
        v.push_back(a);
    }
    if (containsDuplicate(v))
        cout<<"Contain Duplicates";
    else
        cout<<"Not Contain Duplicates";
    return 0;
}
//
// Created by Ankit on 12-07-2025.
//
