#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size());
        int pos=0,neg=1;

        for(int i=0;i<nums.size();i++){
            if (nums[i]>0){
                res[pos]=nums[i];
                pos+=2;
            }
            if (nums[i]<0){
                res[neg]=nums[i];
                neg+=2;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> result = sol.rearrangeArray(nums);

    cout << "Rearranged array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}