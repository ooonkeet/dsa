#include<bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string>& strs) {
    int rows = strs.size(); //Number of rows
    int cols = strs[0].size(); //Number of columns

    int deletion = 0;

    vector<bool> alreadySorted(rows, false);

    int row = 0;
    int col = 0;
    //iterate in strs

    for(col = 0; col < cols; col++) {
        bool deleted = false;

        for(row = 0; row < rows-1; row++) {
            if(!alreadySorted[row] && strs[row][col] > strs[row+1][col]) {
                deletion++;
                deleted = true;
                break;
            }
        }

        if(deleted) {
            continue;
        }

        for(int i = 0; i < rows-1; i++) {
            alreadySorted[i] = alreadySorted[i] | (strs[i][col] < strs[i+1][col]);
        }

    }

    return deletion;
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

//T.C : O(rows * cols)
//S.C : O(rows)