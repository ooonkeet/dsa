#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll ans = 0;
    int j = 0;
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        while (j < n && freq[v[j]] == 0) {
            freq[v[j]]++;
            j++;
        }
        ans += (j - i);
        freq[v[i]]--;
        if (freq[v[i]] == 0)
            freq.erase(v[i]);
    }

    cout << ans;
    return 0;
}
