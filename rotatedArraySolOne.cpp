#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotated(nums.size());
        for(int i=0;i<nums.size();i++){
            rotated[(i+k)%nums.size()]=nums[i];
        }

        for(int i=0;i<nums.size();i++){
            nums[i]=rotated[i];
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    sol.rotate(nums, k);

    cout << "Array after rotation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}