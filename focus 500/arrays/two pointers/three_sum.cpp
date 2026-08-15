#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums) {
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++) {
        if (nums[i]>0)
            break;
        if (i>0 && nums[i]==nums[i-1])
            continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                res.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left+1])
                    left++;
                while (left < right && nums[right] == nums[right-1])
                    right--;
                left++;
                right--;
            }else if(sum > 0) {
                right --;
            }else {
                left++;
            }
        }
    }
    return res;
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    vector<vector<int>> trip=threeSum(arr);
    for (const auto &i:trip) {
        cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
    }
    return 0;
}