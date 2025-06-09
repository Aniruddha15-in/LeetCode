#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for (int i=0;i<nums.size();i++){
            n += i-nums[i];
        }
        return n;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 0, 1};

    int missing = sol.missingNumber(nums);

    cout << "The missing number is: " << missing << endl;

    return 0;
}