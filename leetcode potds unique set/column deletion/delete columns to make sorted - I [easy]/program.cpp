#include<bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string>& strs) {
    int n = strs.size();

    int k = strs[0].length();

    int count = 0;

    for(int i = 0; i<k; i++) {

        for(int j = 1; j<n; j++) {
            if(strs[j][i] < strs[j-1][i]) {
                count++;
                break;
            }
        }
    }

    return count;
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
    cout<<"Number of strings deleted: "<<minDeletionSize(strs);
}

// T.C. -  O(n*k)