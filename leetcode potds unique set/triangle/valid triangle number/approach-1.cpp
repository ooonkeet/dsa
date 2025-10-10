#include<bits/stdc++.h>
using namespace std;
int triangleNumber(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    // check all triplets
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                if(nums[i] + nums[j] > nums[k] &&
                   nums[i] + nums[k] > nums[j] &&
                   nums[j] + nums[k] > nums[i]) {
                    count++;
                   }
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