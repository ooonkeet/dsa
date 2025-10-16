#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &p1, pair<int, int> &p2) {
    return p1.second < p2.second;
}
int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);
    for(int i=0;i<n;i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }
    sort(intervals.begin(), intervals.end(), comp);
    int i=0,endOfLastMovie=-1,movies=0;
    while(i<n) {
        if(endOfLastMovie <= intervals[i].first) {
            movies++;
            endOfLastMovie = intervals[i].second;
            i++;
        }
        else {
            i++;
        }
    }
    cout << movies;
    return 0;
}