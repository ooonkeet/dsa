#include<bits/stdc++.h>
using namespace std;
int triangleNumber(vector<int>& nums) {
    int n = nums.size();
    if(n < 3)
        return 0;

    sort(begin(nums), end(nums));
    int count = 0;

    for(int k = n-1; k > 1; k--) {    // k is the largest side
        int i = 0, j = k-1;           // two pointers

        while(i < j) {
            if(nums[i] + nums[j] > nums[k]) {
                count += (j - i);     // all pairs (i..j-1, j) will satisfy the inequality
                j--;
            } else {
                i++;
            }
        }
    }

    return count;
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cout<<"Enter element "<<i+1<<": ";
        cin>>nums[i];
    }
    cout<<"Number of possible triangle combinations: "<<triangleNumber(nums);
}