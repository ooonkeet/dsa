#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> v(m, vector<int>(n));
    vector<int> rowSum(m, 0), colSum(n, 0);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    // Row sums
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            rowSum[i] += v[i][j];
        }
    }

    // Column sums
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            colSum[j] += v[i][j];
        }
    }

    sort(rowSum.begin(), rowSum.end());
    sort(colSum.begin(), colSum.end());

    cout << rowSum.back() << " " << colSum.back() << endl;

    return 0;
}