#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            for (int j=0;j<nums.size()-1;j++){
                if (nums[j]==0){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}