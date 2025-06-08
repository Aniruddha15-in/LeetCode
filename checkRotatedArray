#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for (int i=0;i<n;i++){
            if (nums[i]>nums[(i+1)%n]){
                count++;
                if (count>1){
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {3, 4, 5, 1, 2};
    vector<int> nums2 = {2, 1, 3, 4};
    
    cout << "Is nums1 a rotated sorted array? " << (sol.check(nums1) ? "Yes" : "No") << endl;
    cout << "Is nums2 a rotated sorted array? " << (sol.check(nums2) ? "Yes" : "No") << endl;

    return 0;
}