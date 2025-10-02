#include<bits/stdc++.h>
using namespace std;
int minimumTotal(vector<vector<int>>& triangle) {
    int n = triangle.size();
    vector<vector<int>> t = triangle;  // copy triangle for t

    // Start from second last row and move upwards
    for (int row = n - 2; row >= 0; row--) {
        for (int col = 0; col <= row; col++) { //1st row me 1 column, 2nd Row me 2 Columns, and so on, that's why (col <= row)
            t[row][col] += min(t[row + 1][col], t[row + 1][col + 1]);
        }
    }

    return t[0][0];  // minimum path sum
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