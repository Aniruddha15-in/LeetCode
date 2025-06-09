#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sol=0;
        for(int i=0;i<nums.size();i++){
            sol^=nums[i];
        }
        return sol;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 2, 1};

    int single = sol.singleNumber(nums);

    cout << "The single number is: " << single << endl;

    return 0;
}   