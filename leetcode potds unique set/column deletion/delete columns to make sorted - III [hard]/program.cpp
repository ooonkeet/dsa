#include<bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string>& strs) {
    int rows = strs.size();
    int cols = strs[0].length();

    vector<int> dp(cols, 1);
    //dp[i] = LIS ending at index i

    int LIS = 1;

    //LIS Pattern
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < i; j++) {

            bool valid = true;
            for(int k = 0; k < rows; k++) {
                if(strs[k][j] > strs[k][i]) {
                    valid = false;
                    break;
                }
            }

            if(valid) {
                dp[i] = max(dp[i], dp[j]+1);
            }

        }

        LIS = max(LIS, dp[i]);
    }

    return cols - LIS;

}
int main() {
    int n;
    cout<<"Enter number of strings: ";
    cin>>n;
    vector<string> strs(n);
    for(int i = 0; i<n; i++) {
        cout<<"Enter string: ";
        cin>>strs[i];
    }
    cout<<"Minimum deletion required: "<<minDeletionSize(strs);
}

//T.C : O(cols*cols*rows)
//S.C : O(cols)