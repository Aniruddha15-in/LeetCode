#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxCount=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]==1){
                count++;
                if (count>maxCount){
                    maxCount=count;
                }
            }
            else{
                count=0;
            }
        }
        return maxCount;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    int maxConsecutiveOnes = sol.findMaxConsecutiveOnes(nums);

    cout << "The maximum number of consecutive ones is: " << maxConsecutiveOnes << endl;

    return 0;
}