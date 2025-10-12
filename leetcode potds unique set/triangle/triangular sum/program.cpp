#include<bits/stdc++.h>
using namespace std;
int triangularSum(vector<int>& nums) {

    while (nums.size() > 1) {
        vector<int> temp;
        for (int i = 0; i < nums.size() - 1; ++i) {
            temp.push_back((nums[i] + nums[i + 1]) % 10);
        }
        //std::move - avoids copying and is faster and more memory-efficient.
        nums = move(temp);
    }
    return nums[0];
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cout << triangularSum(nums);
}