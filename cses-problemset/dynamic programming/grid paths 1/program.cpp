#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    vector<vector<ll>> numberOfPaths(n, vector<ll>(n, 0));

    // Base case: starting cell
    if (grid[0][0] == '.')
        numberOfPaths[0][0] = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '*') continue; // Skip blocked cells

            if (i > 0)
                numberOfPaths[i][j] = (numberOfPaths[i][j] + numberOfPaths[i - 1][j]) % mod;

            if (j > 0)
                numberOfPaths[i][j] = (numberOfPaths[i][j] + numberOfPaths[i][j - 1]) % mod;
        }
    }

    cout << numberOfPaths[n - 1][n - 1];
}