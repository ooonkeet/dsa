#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    unordered_set<int> s;
    for(int i=0;i<n;i++)
        s.insert(v[i]);
    sort(s.begin(),s.end(),greater<int>());
    auto it=s.begin();
    it++;
    cout<<*it<<endl;
    return 0;
}