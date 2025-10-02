#include<bits/stdc++.h>
using namespace std;
int minimumTotal(vector<vector<int>>& triangle) {
     int n = triangle.size();
     vector<int> t(n, 0);

     t[0] = triangle[0][0];

     for (int row = 1; row < n; row++) {
         // go right → left to avoid overwriting
         for (int col = row; col >= 0; col--) {
             if (col == 0) {
                 t[col] = t[col] + triangle[row][col];  // only from above
             } else if (col == row) {
                 t[col] = t[col - 1] + triangle[row][col];  // only from above-left
             } else {
                 t[col] = min(t[col], t[col - 1]) + triangle[row][col];
             }
         }
     }

     return *min_element(t.begin(), t.end());
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