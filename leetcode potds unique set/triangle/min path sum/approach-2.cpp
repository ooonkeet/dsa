#include<bits/stdc++.h>
using namespace std;
int t[201][201];
int n;
int solve(vector<vector<int>>& triangle, int row, int col) {
    if (row == n-1)
        return triangle[row][col];

    if(t[row][col] != INT_MAX)
        return t[row][col];

    int minPath = triangle[row][col] +
                  min(solve(triangle, row + 1, col),
                      solve(triangle, row + 1, col + 1));

    return t[row][col] = minPath;
}
int minimumTotal(vector<vector<int>>& triangle) {
    n = triangle.size();

    for (int i = 0; i < 201; i++) {
        for (int j = 0; j < 201; j++) {
            t[i][j] = INT_MAX;
        }
    }
    return solve(triangle, 0, 0);
}
int main() {
    int n;
    cout<<"Enter triangle height: ";
    cin>>n;
    vector<vector<int>> triangle;
    for(int i=0;i<n;i++){
        cout<<"Enter level "<<i+1<<" (it should contain "<<i+1<<" element(s)): ";
        vector<int> temp;
        for(int j=0;j<i+1;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        triangle.push_back(temp);
    }
    cout<<"Minimum path sum = "<<minimumTotal(triangle);
}