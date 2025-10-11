#include<bits/stdc++.h>
using namespace std;
int largestPerimeter(vector<int>& nums) {
    int n = nums.size();

    sort(begin(nums), end(nums));

    for(int i = n-3; i>=0; i--) {
        //nums[i] < nums[i+1] < nums[i+2]

        if(nums[i] + nums[i+1] > nums[i+2]) //a + b > c
            return nums[i] + nums[i+1] + nums[i+2];
    }

    return 0;

}
int main() {
    int n;
    cout<<"Enter number of triangle sides: ";
    cin>>n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cout<<"Enter side number "<<i+1<<": ";
        cin>>nums[i];
    }
    cout<<"Largest perimeter among all possible triangle combinations: "<<largestPerimeter(nums);
}